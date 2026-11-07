// rea decompile_all
// name: FUN_10009e878
// address: 0x10009e878
// body: available
// range: 0x10009e878-0x10009e9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009e878(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong *unaff_x20;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_130 [64];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uVar5 = unaff_x20[1];
  if (param_1 <= (long)uVar5) {
LAB_10009e9a0:
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009e9e0);
      (*pcVar2)();
    }
    if (!SCARRY8(uVar5,param_2 - param_1)) {
      unaff_x20[1] = uVar5 + (param_2 - param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009e9e4);
    (*pcVar2)();
  }
  uVar4 = *unaff_x20;
  uVar6 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_100080f3c();
  }
  if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009e9fc);
    (*pcVar2)();
  }
  if (0 < param_1) {
    lVar7 = param_1 + 1;
    lVar8 = param_1 * 0x40 + -0x20;
    lVar9 = param_2 * 0x40 + -0x20;
    uVar6 = param_2;
    do {
      uVar6 = uVar6 - 1;
      uVar3 = *(ulong *)(uVar4 + 0x10);
      if (uVar3 <= lVar7 - 2U) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10009e9d8);
        (*pcVar2)();
      }
      puVar1 = (undefined8 *)(uVar4 + lVar8);
      uStack_e8 = puVar1[1];
      local_f0 = *puVar1;
      uStack_d8 = puVar1[3];
      local_e0 = puVar1[2];
      uStack_d0 = puVar1[4];
      uStack_bf = *(undefined8 *)((long)puVar1 + 0x31);
      uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x29) >> 0x38);
      uStack_c8 = (undefined1)puVar1[5];
      local_c7 = (undefined7)((ulong)puVar1[5] >> 8);
      FUN_10008efe8(&local_f0,auStack_130);
      if (uVar3 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10009e9dc);
        (*pcVar2)();
      }
      puVar1 = (undefined8 *)(uVar4 + lVar9);
      uStack_a8 = puVar1[1];
      local_b0 = *puVar1;
      uStack_98 = puVar1[3];
      local_a0 = puVar1[2];
      uStack_90 = puVar1[4];
      uStack_7f = *(undefined8 *)((long)puVar1 + 0x31);
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x29) >> 0x38);
      uStack_88 = (undefined1)puVar1[5];
      local_87 = (undefined7)((ulong)puVar1[5] >> 8);
      *(undefined8 *)((long)puVar1 + 0x31) = uStack_bf;
      *(ulong *)((long)puVar1 + 0x29) = CONCAT17(uStack_c0,local_c7);
      puVar1[3] = uStack_d8;
      puVar1[2] = local_e0;
      puVar1[5] = CONCAT71(local_c7,uStack_c8);
      puVar1[4] = uStack_d0;
      puVar1[1] = uStack_e8;
      *puVar1 = local_f0;
      FUN_10009f8f4(&local_b0,FUN_1000838ec);
      if ((long)(lVar7 - 2U) <= (long)uVar5) {
        *unaff_x20 = uVar4;
        goto LAB_10009e9a0;
      }
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + -0x40;
      lVar9 = lVar9 + -0x40;
    } while (1 < lVar7);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10009e998);
  (*pcVar2)();
}

