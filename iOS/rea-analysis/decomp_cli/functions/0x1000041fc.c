// rea decompile_all
// name: FUN_1000041fc
// address: 0x1000041fc
// body: available
// range: 0x1000041fc-0x10000443b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000043c4) */

void FUN_1000041fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  ulong local_68;
  long lStack_60;
  undefined1 local_51;
  
  puVar4 = &DAT_100101af0;
  FUN_10000eb08(&DAT_100101af0,&DAT_1000cb6f0);
  lVar6 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar1);
  FUN_10000f498();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar5,&DAT_1000f2e40,&DAT_1000f2e40,param_1,uVar1,uVar2);
  local_68 = local_68 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_68,puVar4);
  if (unaff_x21 == 0) {
    local_68 = CONCAT71(local_68._1_7_,1);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[2],unaff_x20[3],&local_68,puVar4)
    ;
    lVar3 = unaff_x20[5];
    local_51 = 2;
    if (lVar3 == 0) {
      __ss22KeyedEncodingContainerV9encodeNil6forKeyyx_tKF(&local_51,puVar4);
    }
    else {
      local_68 = unaff_x20[4];
      lStack_60 = lVar3;
      _swift_bridgeObjectRetain(lVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                (&local_68,&local_51,puVar4,PTR___sSSN_1000f02f8,PTR___sSSSEsWP_1000f0300);
      _swift_bridgeObjectRelease(lVar3);
    }
    lVar3 = unaff_x20[7];
    local_51 = 3;
    if (lVar3 == 0) {
      __ss22KeyedEncodingContainerV9encodeNil6forKeyyx_tKF(&local_51,puVar4);
    }
    else {
      local_68 = unaff_x20[6];
      lStack_60 = lVar3;
      _swift_bridgeObjectRetain(lVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                (&local_68,&local_51,puVar4,PTR___sSSN_1000f02f8,PTR___sSSSEsWP_1000f0300);
      _swift_bridgeObjectRelease(lVar3);
    }
    local_68 = CONCAT71(local_68._1_7_,4);
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              (*(undefined1 *)(unaff_x20 + 8),&local_68,puVar4);
    (**(code **)(lVar6 + 8))(puVar5,puVar4);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,puVar4);
  }
  return;
}

