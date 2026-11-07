// rea decompile_all
// name: FUN_1003a0260
// address: 0x1003a0260
// body: available
// range: 0x1003a0260-0x1003a037b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003a0260(undefined8 param_1,code *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long local_48 [3];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 == 0) {
    if (DAT_100a892f0 != -1) {
      param_2 = FUN_1003dbb88;
      _swift_once(&DAT_100a892f0,FUN_1003dbb88);
    }
    plVar1 = DAT_100a8ccf8;
    plVar3 = DAT_100a8ccf8;
    _swift_retain(DAT_100a8ccf8);
    FUN_1003d8888();
    (**(code **)(*plVar1 + 0x128))(local_48);
    _swift_release(plVar1);
    FUN_100006cc8(plVar3,param_2);
    if (local_48[0] == 0) {
      lVar5 = -0x7ffffffeff74fd50;
      uVar4 = 0xd00000000000001b;
    }
    else {
      _swift_beginAccess(local_48[0] + 0x20,local_48,0,0);
      uVar4 = *(undefined8 *)(local_48[0] + 0x20);
      lVar5 = *(long *)(local_48[0] + 0x28);
      _swift_bridgeObjectRetain(lVar5);
      _swift_release(local_48[0]);
    }
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
    *(long *)(unaff_x20 + 0x18) = lVar5;
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRelease(uVar6);
    lVar2 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar5 = lVar2;
  }
  _swift_bridgeObjectRetain(lVar2);
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = uVar4;
  return auVar7;
}

