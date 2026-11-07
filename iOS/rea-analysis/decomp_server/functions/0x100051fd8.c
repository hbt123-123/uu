// rea decompile_all
// name: FUN_100051fd8
// address: 0x100051fd8
// body: available
// range: 0x100051fd8-0x100052097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100051fd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar5 = *(long *)(unaff_x20 + 0xd8);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    _swift_retain(lVar5);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar5);
    lVar5 = *(long *)(unaff_x20 + 0xd8);
  }
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  _swift_release();
  lVar1 = *(long *)(unaff_x20 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x20 + 200);
  lVar3 = lVar1;
  uVar4 = uVar2;
  uVar6 = uVar2;
  lVar7 = lVar1;
  if (lVar1 == 0) {
    FUN_100051288();
    lVar3 = lVar5;
    uVar4 = param_2;
    uVar6 = *(undefined8 *)(unaff_x20 + 200);
    lVar7 = *(long *)(unaff_x20 + 0xc0);
  }
  *(long *)(unaff_x20 + 0xc0) = lVar3;
  *(undefined8 *)(unaff_x20 + 200) = uVar4;
  FUN_1000750c8(lVar1,uVar2);
  _swift_bridgeObjectRetain(lVar3);
  _swift_bridgeObjectRetain(uVar4);
  FUN_100075168(lVar7,uVar6);
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = lVar3;
  return auVar8;
}

