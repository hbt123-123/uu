// rea decompile_all
// name: FUN_1005bcc50
// address: 0x1005bcc50
// body: available
// range: 0x1005bcc50-0x1005bcdeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bcc50(long param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  local_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  local_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  pbVar9 = (byte *)(param_1 + 0x3c);
  do {
    lVar6 = lVar6 + -1;
    lVar7 = *(long *)(pbVar9 + -0x1c);
    uVar8 = *(ulong *)(pbVar9 + -0x14);
    iVar2 = *(int *)(pbVar9 + -0xc);
    iVar3 = *(int *)(pbVar9 + -4);
    bVar1 = *pbVar9;
    uStack_d8 = uStack_88;
    local_e0 = local_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    local_c0 = local_70;
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    if ((pbVar9[-8] & 1) == 0) {
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyys6UInt64VF((long)iVar2);
    }
    if ((bVar1 & 1) == 0) {
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys6UInt64VF((long)iVar3);
    }
    uVar4 = (uint)(uVar8 >> 0x20);
    uVar5 = uVar4 >> 0x1e;
    if (uVar4 >> 0x1e < 2) {
      if (uVar5 == 0) {
        if ((uVar8 & 0xff000000000000) != 0) {
LAB_1005bcd5c:
          FUN_100008184(lVar7,uVar8);
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_100,lVar7,uVar8);
          FUN_100006cdc(lVar7,uVar8);
        }
      }
      else if ((long)(int)lVar7 != lVar7 >> 0x20) goto LAB_1005bcd5c;
    }
    else if ((uVar5 == 2) && (*(long *)(lVar7 + 0x10) != *(long *)(lVar7 + 0x18)))
    goto LAB_1005bcd5c;
    if (lVar6 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = local_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = local_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = local_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    uStack_88 = uStack_d8;
    local_90 = local_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    local_70 = local_c0;
    uStack_a8 = uStack_f8;
    local_b0 = local_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    pbVar9 = pbVar9 + 0x20;
  } while( true );
}

