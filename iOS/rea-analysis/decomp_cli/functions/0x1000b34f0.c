// rea decompile_all
// name: FUN_1000b34f0
// address: 0x1000b34f0
// body: available
// range: 0x1000b34f0-0x1000b35bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_1000b34f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_48;
  
  lVar4 = *(long *)(param_1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_2,param_1,PTR___sSTTL_1000f0350,PTR___s7ElementSTTl_1000f02a8);
  __sS2hyxGycfC();
  local_48 = uVar1;
  (**(code **)(lVar4 + 0x10))(auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  puStack_58 = &local_48;
  pcVar2 = FUN_1000b36a4;
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_3;
  __sSTsE6filterySay7ElementQzGSbACKXEKF(FUN_1000b36a4,auStack_80,param_1,param_2);
  _swift_bridgeObjectRelease(local_48);
  return pcVar2;
}

