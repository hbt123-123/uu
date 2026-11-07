// rea decompile_all
// name: FUN_1006365ec
// address: 0x1006365ec
// body: available
// range: 0x1006365ec-0x100636783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006365ec(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_68 [8];
  long lStack_58;
  
  lVar9 = *(long *)(unaff_x20 + 8);
  uVar8 = *(ulong *)(lVar9 + 0x10);
  lStack_58 = lVar9;
  if (uVar8 == 0) {
    FUN_100638544();
    _swift_allocError(&DAT_1009e20b8,param_2,0,0);
    *param_2 = 0;
    _swift_willThrow();
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar10 = *(long *)(unaff_x20 + 0x10);
    FUN_10063848c();
    puVar6 = param_2;
    _swift_allocObject();
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar1 = PTR___swiftEmptyArrayStorage_100995ea0 + 0x20;
    *(undefined **)(puVar6 + 0x60) = PTR___swiftEmptyArrayStorage_100995ea0;
    *(undefined **)(puVar6 + 0x68) = puVar1;
    *(undefined8 *)(puVar6 + 0x78) = 1;
    *(undefined8 *)(puVar6 + 0x70) = 0;
    *(undefined8 *)(puVar6 + 0x88) = 0;
    *(undefined **)(puVar6 + 0x90) = puVar4;
    *(undefined8 *)(puVar6 + 0x48) = uVar2;
    *(undefined8 *)(puVar6 + 0x50) = 0;
    *(undefined8 *)(puVar6 + 0x30) = uVar2;
    *(undefined8 *)(puVar6 + 0x38) = uVar3;
    *(undefined **)(puVar6 + 0x80) = puVar4;
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = param_3;
    *(undefined8 *)(puVar6 + 0x20) = param_4;
    *(undefined8 *)(puVar6 + 0x28) = 0x10;
    FUN_1006384ac(&lStack_58,auStack_68);
    FUN_1006384ac(&lStack_58,auStack_68);
    *(long *)(puVar6 + 0x58) = lVar9;
    _swift_retain(param_4);
    if (0xf < uVar8) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100636784);
      (*pcVar5)();
    }
    puVar6[0x40] = '\x0f' - (char)uVar8;
    if (lVar10 == 0) {
      _swift_retain(lVar9);
      FUN_100636798();
      _swift_release(lVar9);
    }
    else {
      lVar7 = *(long *)(lVar10 + 0x10);
      _swift_retain(lVar9);
      FUN_100636798();
      _swift_release(lVar9);
      if (lVar7 != 0) {
        FUN_1006369cc(lVar10);
      }
    }
    FUN_1006384fc(&lStack_58);
    param_1[3] = param_2;
    param_1[4] = &PTR_PTR_1009e2130;
    *param_1 = puVar6;
  }
  return;
}

