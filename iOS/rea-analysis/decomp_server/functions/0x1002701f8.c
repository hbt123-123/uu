// rea decompile_all
// name: FUN_1002701f8
// address: 0x1002701f8
// body: available
// range: 0x1002701f8-0x10027031b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002701f8(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    puVar3 = &DAT_100a81370;
    FUN_100004bb4(&DAT_100a81370,&DAT_100815510);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    _swift_beginAccess(param_3 + 0x10,auStack_90,0,0);
    pcVar1 = *(code **)(param_3 + 0x10);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    _swift_retain(uVar2);
    uVar4 = 0x74736575716552;
    uVar5 = 0xe700000000000000;
    (*pcVar1)(0x74736575716552,0xe700000000000000,param_1,param_2,param_6);
    _swift_release(uVar2);
    *(undefined8 *)(puVar3 + 0x20) = uVar4;
    *(undefined8 *)(puVar3 + 0x28) = uVar5;
    (*param_4)(puVar3);
    _swift_release(param_3);
    _swift_bridgeObjectRelease(puVar3);
  }
  return;
}

