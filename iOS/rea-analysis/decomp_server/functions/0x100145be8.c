// rea decompile_all
// name: FUN_100145be8
// address: 0x100145be8
// body: available
// range: 0x100145be8-0x100145ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100145be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakInit(unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData,0);
  lVar1 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::managerDelegate;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  lVar2 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::operationDelegate;
  *(undefined8 *)(lVar2 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar2,0);
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::_isExecuting) = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::_isFinished) = 0;
  _swift_weakAssign(unaff_x20 + lVar3,param_1);
  *(undefined8 *)(lVar1 + 8) = param_3;
  _swift_unknownObjectWeakAssign(lVar1,param_2);
  *(undefined8 *)(lVar2 + 8) = param_5;
  _swift_unknownObjectWeakAssign(lVar2,param_4);
  FUN_100145bc8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  return;
}

