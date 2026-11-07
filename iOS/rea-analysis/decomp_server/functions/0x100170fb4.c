// rea decompile_all
// name: FUN_100170fb4
// address: 0x100170fb4
// body: available
// range: 0x100170fb4-0x1001711c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100170fb4(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [16];
  long local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  
  lVar2 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  lVar3 = param_1 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  local_60 = param_1;
  if (lVar3 == 0) {
    lVar3 = param_1 + lVar2;
    _swift_weakLoadStrong();
    if (lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar3 + 0x158);
      _swift_release();
    }
    param_1 = param_1 + lVar2;
    _swift_weakLoadStrong();
    if (param_1 == 0) {
      uVar5 = 0;
      uVar6 = 0xf000000000000000;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      uVar6 = *(undefined8 *)(param_1 + 0x80);
      FUN_10010bd10(uVar5,uVar6);
      _swift_release(param_1);
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    uStack_58 = uVar7;
    local_50 = uVar5;
    uStack_48 = uVar6;
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    _swift_allocObject();
    pcVar4 = FUN_1001781bc;
  }
  else {
    cVar1 = *(char *)(lVar3 + 0x164);
    _swift_release();
    if (cVar1 != '\0') {
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_50 = param_1;
      FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
      _swift_allocObject();
      FUN_100615648(FUN_100177e6c,&local_60);
      return;
    }
    lVar3 = param_1 + lVar2;
    _swift_weakLoadStrong();
    if (lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar3 + 0x158);
      _swift_release();
    }
    param_1 = param_1 + lVar2;
    _swift_weakLoadStrong();
    if (param_1 == 0) {
      uVar5 = 0;
      uVar6 = 0xf000000000000000;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      uVar6 = *(undefined8 *)(param_1 + 0x80);
      FUN_10010bd10(uVar5,uVar6);
      _swift_release(param_1);
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    uStack_58 = uVar7;
    local_50 = uVar5;
    uStack_48 = uVar6;
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    _swift_allocObject();
    pcVar4 = FUN_100177e84;
  }
  FUN_100615648(pcVar4,auStack_70);
  FUN_100006cc8(uVar5,uVar6);
  return;
}

