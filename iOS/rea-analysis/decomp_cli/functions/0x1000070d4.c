// rea decompile_all
// name: FUN_1000070d4
// address: 0x1000070d4
// body: available
// range: 0x1000070d4-0x100007267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000070d4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  long lVar6;
  ulong local_80;
  long lStack_78;
  ulong local_70;
  long lStack_68;
  undefined1 local_51;
  
  puVar4 = &DAT_100101bb8;
  local_80 = param_4;
  lStack_78 = param_5;
  FUN_10000eb08(&DAT_100101bb8,&DAT_1000cb758);
  lVar5 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_80 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar1);
  FUN_1000106ac();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar6,&DAT_1000f29e0,&DAT_1000f29e0,param_1,uVar1,uVar2);
  local_70 = local_70 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(param_2,param_3,&local_70,puVar4);
  lVar3 = lStack_78;
  if (unaff_x21 == 0) {
    local_51 = 1;
    if (lStack_78 == 0) {
      __ss22KeyedEncodingContainerV9encodeNil6forKeyyx_tKF(&local_51,puVar4);
      (**(code **)(lVar5 + 8))(lVar6,puVar4);
    }
    else {
      local_70 = local_80;
      lStack_68 = lStack_78;
      _swift_bridgeObjectRetain(lStack_78);
      __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                (&local_70,&local_51,puVar4,PTR___sSSN_1000f02f8,PTR___sSSSEsWP_1000f0300);
      (**(code **)(lVar5 + 8))(lVar6,puVar4);
      _swift_bridgeObjectRelease(lVar3);
    }
  }
  else {
    (**(code **)(lVar5 + 8))(lVar6,puVar4);
  }
  return;
}

