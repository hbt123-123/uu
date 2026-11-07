// rea decompile_all
// name: _TtC6FCount6FCount::init
// address: 0x100235170
// body: available
// range: 0x100235170-0x1002352b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID _TtC6FCount6FCount::init(ID param_1,SEL param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  class_t *pcVar6;
  ID IVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  objc_super local_60;
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar5 = eventManager;
  lVar9 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_10022ed64();
  _swift_allocObject();
  FUN_10022d8b0();
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  lVar5 = foregroundDate;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  pcVar11 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  (*pcVar11)(param_1 + lVar5,1,1,lVar4);
  lVar5 = param_1 + backgroundDate;
  lVar8 = 1;
  (*pcVar11)(lVar5,1,1,lVar4);
  plVar1 = (long *)(param_1 + _session_id);
  __s10Foundation4UUIDVACycfC(lVar9);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar10 + 8))(lVar9,lVar2);
  *plVar1 = lVar5;
  plVar1[1] = lVar8;
  pcVar6 = (class_t *)0x0;
  FUN_100237814();
  local_60.receiver = param_1;
  local_60.super_class = pcVar6;
  IVar7 = _objc_msgSendSuper2(&local_60,"init");
  FUN_10021c100();
  return IVar7;
}

