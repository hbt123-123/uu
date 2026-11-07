// rea decompile_all
// name: FUN_10009e71c
// address: 0x10009e71c
// body: available
// range: 0x10009e71c-0x10009e877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009e71c(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 local_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uVar7 = unaff_x20[1];
  if ((long)uVar7 <= (long)param_1) {
    if (uVar7 != param_1) {
      if ((long)uVar7 < (long)param_1) {
        uVar6 = *unaff_x20;
        lVar8 = param_1 << 6;
        uVar5 = param_1;
        do {
          if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10009e858);
            (*pcVar3)();
          }
          if (*(ulong *)(uVar6 + 0x10) <= uVar5 - 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10009e85c);
            (*pcVar3)();
          }
          puVar1 = (undefined8 *)(uVar6 + lVar8);
          uStack_88 = puVar1[-3];
          local_90 = puVar1[-4];
          uStack_78 = puVar1[-1];
          local_80 = puVar1[-2];
          uStack_70 = *puVar1;
          uStack_5f = *(undefined8 *)((long)puVar1 + 0x11);
          uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 9) >> 0x38);
          uStack_68 = (undefined1)puVar1[1];
          local_67 = (undefined7)((ulong)puVar1[1] >> 8);
          FUN_10008efe8(&local_90,&local_d0);
          uVar4 = uVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar4 & 1) == 0) {
            FUN_100080f3c();
          }
          if (*(ulong *)(uVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10009e860);
            (*pcVar3)();
          }
          lVar2 = uVar6 + lVar8;
          uStack_c8 = *(undefined8 *)(lVar2 + 0x28);
          local_d0 = *(undefined8 *)(lVar2 + 0x20);
          uStack_b8 = *(undefined8 *)(lVar2 + 0x38);
          local_c0 = *(undefined8 *)(lVar2 + 0x30);
          uStack_b0 = *(undefined8 *)(lVar2 + 0x40);
          uStack_9f = *(undefined8 *)(lVar2 + 0x51);
          uStack_a0 = (undefined1)((ulong)*(undefined8 *)(lVar2 + 0x49) >> 0x38);
          uStack_a8 = (undefined1)*(undefined8 *)(lVar2 + 0x48);
          local_a7 = (undefined7)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 8);
          *(undefined8 *)(lVar2 + 0x51) = uStack_5f;
          *(ulong *)(lVar2 + 0x49) = CONCAT17(uStack_60,local_67);
          *(undefined8 *)(lVar2 + 0x38) = uStack_78;
          *(undefined8 *)(lVar2 + 0x30) = local_80;
          *(ulong *)(lVar2 + 0x48) = CONCAT71(local_67,uStack_68);
          *(undefined8 *)(lVar2 + 0x40) = uStack_70;
          *(undefined8 *)(lVar2 + 0x28) = uStack_88;
          *(undefined8 *)(lVar2 + 0x20) = local_90;
          FUN_10009f8f4(&local_d0,FUN_1000838ec);
          uVar5 = uVar5 - 1;
          if (uVar5 == uVar7) {
            *unaff_x20 = uVar6;
            goto LAB_10009e864;
          }
        } while (((long)uVar7 < (long)uVar5) &&
                (lVar8 = lVar8 + -0x40, (long)uVar5 <= (long)param_1));
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009e854);
      (*pcVar3)();
    }
LAB_10009e864:
    if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009e878);
      (*pcVar3)();
    }
    unaff_x20[1] = uVar7 + 1;
  }
  return;
}

