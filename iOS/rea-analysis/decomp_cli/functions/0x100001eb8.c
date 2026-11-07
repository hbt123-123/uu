// rea decompile_all
// name: FUN_100001eb8
// address: 0x100001eb8
// body: available
// range: 0x100001eb8-0x100002013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100001eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_70;
  
  lVar1 = 0;
  local_70 = param_5;
  __sSqMa(0,param_4);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&local_70 - extraout_x8;
  lVar4 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar4 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(lVar5,param_1,lVar1);
  lVar2 = lVar5;
  (**(code **)(lVar4 + 0x30))(lVar5,1,param_4);
  if ((int)lVar2 == 1) {
    (**(code **)(lVar3 + 8))(lVar5,lVar1);
    __ss22KeyedEncodingContainerV9encodeNil6forKeyyx_tKF(param_2,param_3);
  }
  else {
    (**(code **)(lVar4 + 0x20))(lVar6,lVar5,param_4);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (lVar6,param_2,param_3,param_4,local_70);
    (**(code **)(lVar4 + 8))(lVar6,param_4);
  }
  return;
}

