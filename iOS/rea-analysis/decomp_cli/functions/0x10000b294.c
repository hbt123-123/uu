// rea decompile_all
// name: FUN_10000b294
// address: 0x10000b294
// body: available
// range: 0x10000b294-0x10000b3cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000b294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,code *param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_52;
  undefined1 local_51;
  
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_3;
  FUN_10000eb08(param_6,param_7);
  lVar4 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&local_80 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar1);
  (*param_8)();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar3,param_9,param_9,param_1,uVar1,uVar2);
  local_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(param_2,local_70,&local_51,param_6);
  if (unaff_x21 == 0) {
    local_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(local_80,uStack_78,&local_52,param_6);
    (**(code **)(lVar4 + 8))(lVar3,param_6);
  }
  else {
    (**(code **)(lVar4 + 8))(lVar3,param_6);
  }
  return;
}

