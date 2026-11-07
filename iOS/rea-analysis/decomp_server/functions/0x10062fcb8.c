// rea decompile_all
// name: FUN_10062fcb8
// address: 0x10062fcb8
// body: available
// range: 0x10062fcb8-0x10062fda3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062fcb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  uVar2 = 0;
  local_48 = param_3;
  __sSaMa(0,param_4);
  puVar3 = PTR___sSayxGSksMc_1009958a8;
  _swift_getWitnessTable(PTR___sSayxGSksMc_1009958a8,uVar2);
  __sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE7indicesACvg
            (&local_60,uVar2,puVar3,PTR___sSiSxsWP_1009959a0);
  uStack_68 = uStack_58;
  local_70 = local_60;
  puVar3 = &DAT_100ab8138;
  local_78 = param_2;
  FUN_100004bb4(&DAT_100ab8138,&DAT_100849100);
  puVar4 = &local_78;
  __sSn8containsySbxF(puVar4,puVar3);
  bVar1 = ((ulong)puVar4 & 1) == 0;
  if (!bVar1) {
    __sSayxSicig(param_1,param_2,param_3,param_4);
  }
  (**(code **)(*(long *)(param_4 + -8) + 0x38))(param_1,bVar1,1,param_4);
  return;
}

