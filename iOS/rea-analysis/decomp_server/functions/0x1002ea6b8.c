// rea decompile_all
// name: FUN_1002ea6b8
// address: 0x1002ea6b8
// body: available
// range: 0x1002ea6b8-0x1002ea873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ea870 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ea6b8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  char acStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  FUN_1002c76a8();
  pcVar6 = acStack_80 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_1009aeed8;
  _swift_allocObject(&DAT_1009aeed8,0x20,7);
  *(long *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  if ((param_4 & 1) != 0) {
    plVar7 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
    uVar5 = *(undefined8 *)(plVar7[2] + 0x10);
    _swift_retain(param_2);
    _swift_retain(param_1);
    _os_unfair_lock_lock(uVar5);
    lVar2 = *(long *)(*plVar7 + 0x60);
    _swift_beginAccess((long)plVar7 + lVar2,auStack_78,0,0);
    FUN_100082394((long)plVar7 + lVar2,pcVar6,FUN_1002c76a8);
    cVar1 = *pcVar6;
    FUN_1000d27dc(pcVar6,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar5);
    if (cVar1 != '\x03') {
      FUN_1002cb47c();
      FUN_1002e6b44(param_1,1);
    }
    _swift_release(puVar3);
    return;
  }
  puVar4 = &DAT_1009aef00;
  _swift_allocObject(&DAT_1009aef00,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1002f0cf0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  _swift_retain(param_2);
  _swift_retain(param_1);
  _swift_retain(puVar3);
  FUN_100311578(param_3,FUN_100102840,puVar4);
  _swift_release(puVar4);
  _swift_release(puVar3);
  return;
}

