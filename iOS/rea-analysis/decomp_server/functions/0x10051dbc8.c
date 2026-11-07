// rea decompile_all
// name: FUN_10051dbc8
// address: 0x10051dbc8
// body: available
// range: 0x10051dbc8-0x10051dca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10051dbc8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_5 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  (**(code **)(param_6 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_5,param_6);
  lVar6 = *(long *)(param_2 + 0x10) + 1;
  puVar4 = (undefined8 *)(param_2 + 0x28);
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) break;
    uVar2 = puVar4[-1];
    uVar1 = *puVar4;
    _swift_bridgeObjectRetain(uVar1);
    thunk_FUN_100537f98(uVar2,uVar1,param_5,param_6);
    _swift_bridgeObjectRelease(uVar1);
    puVar4 = puVar4 + 2;
  } while ((uVar2 & 1) != 0);
  (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_5);
  return lVar6 == 0;
}

