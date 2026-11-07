// rea decompile_all
// name: FUN_1002f20c0
// address: 0x1002f20c0
// body: available
// range: 0x1002f20c0-0x1002f21ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f20c0(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 *puVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  puVar2 = (undefined8 *)(unaff_x20 + _TtC9Alamofire15SessionDelegate::eventMonitor);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  lVar1 = _TtC9Alamofire15SessionDelegate::sessionInvalidationCleanup;
  puVar3 = &DAT_100a82218;
  FUN_100004bb4(&DAT_100a82218,&DAT_100818fe0);
  _swift_allocObject();
  lVar4 = 0;
  FUN_1002c6dd8();
  _swift_allocObject();
  puVar5 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar4 + 0x10) = puVar5;
  *puVar5 = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(long *)(puVar3 + 0x10) = lVar4;
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _TtC9Alamofire15SessionDelegate::fileManager) = param_1;
  FUN_1002f21ac();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  return;
}

