// rea decompile_all
// name: FUN_10062c4d8
// address: 0x10062c4d8
// body: available
// range: 0x10062c4d8-0x10062c6a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062c4d8(long param_1,undefined1 *param_2,undefined1 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar2 = 0;
  FUN_1006790a4();
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  _swift_allocObject();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(lVar2 + 0x10) = param_1;
  *(undefined8 *)(lVar2 + 0x18) = uVar6;
  _swift_bridgeObjectRetain(param_1);
  _mlock(param_1 + 0x20,uVar6);
  _swift_bridgeObjectRelease(param_1);
  *(long *)(unaff_x20 + 0x38) = lVar2;
  puVar3 = param_2;
  FUN_1000b142c(param_2,unaff_x20 + 0x40);
  *(undefined1 *)(unaff_x20 + 0x68) = param_3;
  uVar4 = *(ulong *)(lVar2 + 0x18);
  *(ulong *)(unaff_x20 + 0x28) = uVar4;
  if (uVar4 + 0xf000000000000000 >> 0x3d < 7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10062c6a0);
    (*pcVar1)();
  }
  uVar4 = uVar4 & 0x1fffffffffffffff;
  if (uVar4 == 0x10) {
    uVar5 = 0;
    lVar2 = 0;
  }
  else if (uVar4 == 0x20) {
    lVar2 = 2;
    uVar5 = 2;
  }
  else {
    if (uVar4 != 0x18) {
      FUN_10062e25c();
      _swift_allocError(&DAT_1009e12a8,puVar3,0,0);
      *puVar3 = 0;
      _swift_willThrow();
      FUN_10003f094(param_2);
      _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
      FUN_10003f094(unaff_x20 + 0x40);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
      FUN_100075168(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x90));
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x98));
      _swift_deallocPartialClassInstance();
      return;
    }
    uVar5 = 1;
    lVar2 = 1;
  }
  *(undefined1 *)(unaff_x20 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x18) = 4;
  *(undefined8 *)(unaff_x20 + 0x20) = (&DAT_100ab07b8)[lVar2];
  lVar2 = (&DAT_100ab07f8)[lVar2];
  FUN_10003f094(param_2);
  if (!SCARRY8(lVar2,6)) {
    *(long *)(unaff_x20 + 0x10) = lVar2 + 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10062c6a4);
  (*pcVar1)();
}

