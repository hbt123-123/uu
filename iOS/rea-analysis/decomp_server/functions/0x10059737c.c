// rea decompile_all
// name: FUN_10059737c
// address: 0x10059737c
// body: available
// range: 0x10059737c-0x10059763b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005975a8) */

void FUN_10059737c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long unaff_x21;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_10059763c(param_1,param_2,param_7,param_8);
  if (unaff_x21 == 0) {
    FUN_1005976d8(param_1,param_2,param_7,param_8);
    FUN_100597760(param_1,param_2,param_7,param_8);
    FUN_1005977e8(param_1,param_2,param_7,param_8);
    FUN_100597870(param_1,param_2,param_7,param_8);
    FUN_10059790c(param_1,param_2,param_7,param_8);
    FUN_100597994(param_1,param_2,param_7,param_8);
    FUN_100597a1c(param_1,param_2,param_7,param_8);
    FUN_100597aa4(param_1,param_2,param_7,param_8);
    _swift_beginAccess(param_1 + 0x20,auStack_68,0,0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_8 + 0x110);
      FUN_1005b2a04();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x28,auStack_80,0,0);
    lVar1 = *(long *)(param_1 + 0x28);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_8 + 0x118);
      FUN_1005ab408();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    FUN_100597b40(param_1,param_2,param_7,param_8);
    FUN_100597c20(param_1,param_2,param_7,param_8);
    _swift_beginAccess(param_1 + 0x80,auStack_98,0,0);
    lVar1 = *(long *)(param_1 + 0x80);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_8 + 0x118);
      FUN_1005a86d4();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    (**(code **)(param_8 + 0x1b0))(param_5,1000,0x20000000,param_7,param_8);
  }
  return;
}

