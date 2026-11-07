// rea decompile_all
// name: FUN_1007aeefc
// address: 0x1007aeefc
// body: available
// range: 0x1007aeefc-0x1007af133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007aef3c to 0x1007af134 FUN_1007af134 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007aeefc(ulong param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  
  if ((param_1 & 0xf) == 5) {
    FUN_1007af134(param_1,param_2,param_3);
    return;
  }
  uVar5 = param_1;
  FUN_1007aeea8();
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x60) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x10) + ((bVar1 & 5) != 4);
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
  }
  puVar4 = (ushort *)((long)puVar6 + ((ulong)(bVar1 >> 2) & 1));
  iVar13 = (int)param_3;
  iVar3 = (int)uVar5;
  if ((bVar1 >> 4 & 1) == 0) {
    if (iVar13 != 0) {
      if (iVar3 != 0) {
        if (iVar13 <= iVar3) {
          iVar3 = iVar13 + -1;
        }
        FUN_1007ae6e0(puVar4,param_2,iVar3);
        if ((int)puVar4 != 0) {
          param_2 = param_2 + iVar3;
        }
      }
LAB_1007aefb4:
      *param_2 = 0;
    }
  }
  else {
    pbVar9 = param_2;
    if ((0 < iVar3) && (pbVar10 = param_2 + (long)iVar13 + -1, pbVar8 = param_2, param_2 < pbVar10))
    {
      do {
        iVar3 = (int)uVar5;
        puVar7 = puVar4 + 1;
        uVar2 = *puVar4;
        uVar11 = (uint)uVar2;
        if (0x1e < (uVar2 + 0x2000 >> 0xb & 0x1f)) {
          if ((0x36 < uVar2 >> 10) || (uVar2 = *puVar7, (uVar2 + 0x2000 >> 10 & 0x3f) < 0x3f))
          goto LAB_1007aefb4;
          puVar7 = puVar4 + 2;
          uVar11 = (uint)uVar2 + uVar11 * 0x400 + 0xfca02400;
          iVar3 = iVar3 + -1;
        }
        bVar1 = (byte)uVar11;
        if (uVar11 < 0x80) {
          pbVar9 = pbVar8 + 1;
          *pbVar8 = bVar1;
        }
        else {
          lVar12 = (long)pbVar10 - (long)pbVar8;
          pbVar9 = pbVar8;
          if (uVar11 < 0x800) {
            if (lVar12 < 2) break;
            *pbVar8 = (byte)(uVar11 >> 6) | 0xc0;
            pbVar8[1] = bVar1 & 0x3f | 0x80;
            pbVar9 = pbVar8 + 2;
          }
          else if (uVar11 >> 0x10 == 0) {
            if (lVar12 < 3) break;
            *pbVar8 = (byte)(uVar11 >> 0xc) | 0xe0;
            pbVar8[1] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
            pbVar8[2] = bVar1 & 0x3f | 0x80;
            pbVar9 = pbVar8 + 3;
          }
          else {
            if (lVar12 < 4) break;
            *pbVar8 = (byte)(uVar11 >> 0x12) | 0xf0;
            pbVar8[1] = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
            pbVar8[2] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
            pbVar8[3] = bVar1 & 0x3f | 0x80;
            pbVar9 = pbVar8 + 4;
          }
        }
        if ((iVar3 < 2) ||
           (uVar5 = (ulong)(iVar3 - 1), puVar4 = puVar7, pbVar8 = pbVar9, pbVar10 <= pbVar9)) break;
      } while( true );
    }
    *pbVar9 = 0;
  }
  return;
}

