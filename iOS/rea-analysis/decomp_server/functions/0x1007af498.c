// rea decompile_all
// name: FUN_1007af498
// address: 0x1007af498
// body: available
// range: 0x1007af498-0x1007af603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1007af498(undefined8 *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  int iVar9;
  char *pcVar10;
  undefined **ppuVar11;
  
  puVar3 = param_1;
  FUN_1007af3e0();
  if ((int)puVar3 == 0) {
    lVar6 = param_1[1];
    if (((int)param_3 <= lVar6) || (param_3 = lVar6, 0 < lVar6)) {
      iVar9 = (int)param_3;
      if (((ulong)param_1 & 1) == 0) {
        puVar7 = (undefined *)*param_1;
        if (((ulong)puVar7 & 1) != 0) {
          puVar7 = (undefined *)((ulong)puVar7 & 0xffffffff8);
        }
        uVar8 = *(ulong *)((*(ulong *)(puVar7 + 0x20) & 0x7ffffffffff8) + 8);
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        ppuVar11 = &PTR_s___NSCFString_100abb6f0;
        if (PTR_s___NSCFString_100abb6f0 != (undefined *)0x0) {
          pcVar10 = *(char **)(uVar8 + 0x18);
          ppuVar11 = &PTR_s___NSCFString_100abb6f0;
          pcVar5 = PTR_s___NSCFString_100abb6f0;
          do {
            if (ppuVar11[5] == puVar7) break;
            if ((ppuVar11[5] == (undefined *)0x0) && (iVar2 = _strcmp(pcVar10,pcVar5), iVar2 == 0))
            {
              ppuVar11[5] = puVar7;
              break;
            }
            ppuVar11 = ppuVar11 + 6;
            pcVar5 = *ppuVar11;
          } while (pcVar5 != (char *)0x0);
        }
      }
      else {
        ppuVar11 = &PTR_s_NSAtom_1009ea5e0 + ((ulong)param_1 >> 1 & 7) * 6;
      }
      if (*(char *)(ppuVar11 + 2) == '\0') {
        plVar4 = param_1 + 2;
        goto LAB_1007af5d4;
      }
    }
  }
  else {
    lVar6 = param_1[2];
    if (((int)param_3 <= lVar6) || (param_3 = lVar6, 0 < lVar6)) {
      iVar9 = (int)param_3;
      bVar1 = *(byte *)(param_1 + 1);
      if ((bVar1 & 3) == 2) {
        plVar4 = (long *)param_1[5] + *(long *)param_1[5] + 2;
      }
      else {
        lVar6 = 0x58;
        if (((bVar1 ^ 0xff) & 0xc) != 0) {
          lVar6 = 0x30;
        }
        plVar4 = (long *)0x0;
        if ((bVar1 & 3) == 0) {
          plVar4 = (long *)((long)param_1 + lVar6);
        }
      }
LAB_1007af5d4:
      FUN_1007ae6e0(plVar4,param_2,iVar9 << 3);
      if ((int)plVar4 != 0) {
        return iVar9;
      }
      return 0;
    }
  }
  return 0;
}

