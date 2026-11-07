// rea decompile_all
// name: FUN_100615ddc
// address: 0x100615ddc
// body: available
// range: 0x100615ddc-0x100615ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100615ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  void *aBlock;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  FUN_10061601c();
  puVar1 = &DAT_1009dfb28;
  _swift_allocObject(&DAT_1009dfb28,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  local_60 = FUN_100616184;
  local_80 = PTR___NSConcreteStackBlock_100995490;
  local_78 = 0x42000000;
  local_70 = FUN_1000acdb4;
  puStack_68 = &DAT_1009dfb40;
  local_58 = puVar1;
  aBlock = __Block_copy(&local_80);
  _swift_retain(param_6);
  _swift_retain(param_5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (param_1,param_2,param_3,aBlock);
  __Block_release(aBlock);
  _swift_release(local_58);
  return param_6;
}

