// rea decompile_all
// name: FUN_1003e34b8
// address: 0x1003e34b8
// body: available
// range: 0x1003e34b8-0x1003e3633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e34b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_120 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  code *pcStack_f8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_90,0,0);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    _swift_bridgeObjectRetain(uVar3);
    _swift_release(param_2);
    local_98 = auStack_a0;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_d0 = param_5;
    uStack_c8 = param_6;
    local_c0 = param_7;
    uStack_b8 = param_3;
    local_b0 = param_4;
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcStack_f8 = FUN_1003e4314;
    uVar1 = 0;
    local_110 = param_5;
    uStack_108 = param_6;
    local_100 = param_7;
    __sSDMa(0,param_5,param_6,param_7);
    puVar2 = PTR___sSDyxq_GSTsMc_100995788;
    _swift_getWitnessTable(PTR___sSDyxq_GSTsMc_100995788,uVar1);
    __sSTsE7forEachyyy7ElementQzKXEKF(FUN_1003e4334,auStack_120,uVar1,puVar2);
    _swift_bridgeObjectRelease(uVar3);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}

