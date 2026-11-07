// rea decompile_all
// name: FUN_10000cb30
// address: 0x10000cb30
// body: available
// range: 0x10000cb30-0x10000cce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000cb30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [15];
  undefined1 local_71;
  ulong local_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = &DAT_100101d48;
  FUN_10000eb08(&DAT_100101d48,&DAT_1000cb828);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar4);
  FUN_10001388c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar5,&DAT_1000f1ec0,&DAT_1000f1ec0,param_1,uVar4,uVar1);
  uVar4 = *unaff_x20;
  local_70 = local_70 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar4,unaff_x20[1],&local_70,puVar3);
  if (unaff_x21 == 0) {
    lStack_68 = unaff_x20[3];
    local_70 = unaff_x20[2];
    uStack_58 = unaff_x20[5];
    uStack_60 = unaff_x20[4];
    local_71 = 1;
    FUN_1000108b4();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_70,&local_71,puVar3,&DAT_1000f10a8,uVar4);
    lVar2 = unaff_x20[7];
    local_71 = 2;
    if (lVar2 != 0) {
      local_70 = unaff_x20[6];
      lStack_68 = lVar2;
      _swift_bridgeObjectRetain(lVar2);
      __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                (&local_70,&local_71,puVar3,PTR___sSSN_1000f02f8,PTR___sSSSEsWP_1000f0300);
      (**(code **)(lVar6 + 8))(puVar5,puVar3);
      _swift_bridgeObjectRelease(lVar2);
      return;
    }
    __ss22KeyedEncodingContainerV9encodeNil6forKeyyx_tKF(&local_71,puVar3);
  }
  (**(code **)(lVar6 + 8))(puVar5,puVar3);
  return;
}

