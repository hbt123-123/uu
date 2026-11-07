// rea decompile_all
// name: FUN_10000c800
// address: 0x10000c800
// body: available
// range: 0x10000c800-0x10000c9f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010000c96c) */

void FUN_10000c800(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  ulong local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_51;
  
  puVar4 = &DAT_100101d30;
  FUN_10000eb08(&DAT_100101d30,&DAT_1000cb820);
  lVar6 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar5);
  FUN_100013414();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&local_90 - extraout_x8,&DAT_1000f1f50,&DAT_1000f1f50,param_1,uVar5,uVar1);
  uVar5 = *unaff_x20;
  local_90 = local_90 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar5,unaff_x20[1],&local_90,puVar4);
  if (unaff_x21 == 0) {
    lVar2 = unaff_x20[3];
    uVar1 = unaff_x20[5];
    uVar3 = unaff_x20[7];
    local_51 = 1;
    if (lVar2 == 0) {
      __ss22KeyedEncodingContainerV9encodeNil6forKeyyx_tKF(&local_51,puVar4);
    }
    else {
      local_90 = unaff_x20[2];
      lStack_88 = lVar2;
      local_80 = unaff_x20[4];
      uStack_78 = uVar1;
      local_70 = unaff_x20[6];
      uStack_68 = uVar3;
      FUN_100013454();
      _swift_bridgeObjectRetain(lVar2);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar3);
      __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                (&local_90,&local_51,puVar4,&DAT_1000f1728,uVar5);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRelease(lVar2);
    }
    local_90 = CONCAT71(local_90._1_7_,2);
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              (*(undefined1 *)(unaff_x20 + 8),&local_90,puVar4);
  }
  (**(code **)(lVar6 + 8))((long)&local_90 - extraout_x8,puVar4);
  return;
}

