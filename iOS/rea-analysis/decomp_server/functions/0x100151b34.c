// rea decompile_all
// name: FUN_100151b34
// address: 0x100151b34
// body: available
// range: 0x100151b34-0x100151cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100151b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_100401b14(0);
  local_80 = param_1;
  uStack_78 = param_2;
  local_70 = param_3;
  FUN_1003fb45c(FUN_100152434,auStack_90,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000032,
                0x80000001008923d0,0x17f,7);
  lVar1 = 0;
  FUN_10016db04();
  _swift_allocObject();
  lVar2 = 0;
  FUN_10016dae4();
  lVar3 = lVar2;
  _swift_allocObject();
  FUN_10016d3cc();
  *(long *)(lVar1 + 0x10) = lVar3;
  *(undefined1 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x28) = 0xf000000000000000;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined1 *)(lVar1 + 0x38) = 1;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  lVar4 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar4 == 0) {
    _swift_allocObject(lVar2,0x165,7);
    FUN_10016d3cc();
    lVar4 = lVar2;
  }
  *(long *)(lVar1 + 0x10) = lVar4;
  _swift_release(lVar3);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  FUN_100008184(param_1,param_2);
  FUN_100006cc8(0,0xf000000000000000);
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  *(undefined1 *)(lVar1 + 0x38) = 0;
  lVar4 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::operationDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    _swift_release(lVar1);
  }
  else {
    FUN_1001639b0(lVar1,param_4,param_5);
    _swift_release(lVar1);
    _swift_unknownObjectRelease(lVar4);
  }
  return;
}

