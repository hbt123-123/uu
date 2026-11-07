// rea decompile_all
// name: FUN_1000626c4
// address: 0x1000626c4
// body: available
// range: 0x1000626c4-0x100062847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000626c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(param_6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_6 + -8) + 0x10))(puVar4,param_2,param_6);
  lVar5 = param_6;
  __sSS10describingSSx_tclufC(puVar4,param_6);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  FUN_100096cd8(puVar4,lVar5,param_3,param_4,param_5);
  (**(code **)(param_7 + 0x18))(param_2,param_6,param_7);
  FUN_100067074(puVar4,lVar5,param_2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(lVar5);
  if (*(long *)(puVar4 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar4);
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(puVar4 + 0x20);
    uVar2 = *(undefined8 *)(puVar4 + 0x28);
    uVar3 = puVar4[0x30];
    FUN_100065610(uVar1,uVar2,uVar3);
    _swift_bridgeObjectRelease(puVar4);
    uVar6 = uVar1;
    uVar7 = uVar2;
    FUN_1000979e4(uVar1,uVar2,uVar3);
    FUN_100065628(uVar1,uVar2,uVar3);
  }
  *param_1 = uVar6;
  param_1[1] = uVar7;
  return;
}

