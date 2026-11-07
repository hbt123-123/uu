// rea decompile_all
// name: FUN_10065d73c
// address: 0x10065d73c
// body: available
// range: 0x10065d73c-0x10065d817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065d73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_60;
  long local_58;
  
  puVar1 = auStack_a0 + -(*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(puVar1,param_2);
  lVar3 = param_4;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (puVar1,param_4,*(undefined8 *)(param_6 + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_6 + 8) + 8) + 8));
  uVar2 = 0;
  local_90 = param_4;
  uStack_88 = param_5;
  local_80 = param_6;
  uStack_78 = param_7;
  local_70 = param_3;
  local_60 = puVar1;
  local_58 = lVar3;
  __sSqMa(0,param_5);
  FUN_10065df80(param_1,FUN_10065e998,auStack_a0,uVar2);
  _swift_bridgeObjectRelease(local_58);
  return;
}

