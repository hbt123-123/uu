// rea decompile_all
// name: FUN_10040f940
// address: 0x10040f940
// body: available
// range: 0x10040f940-0x10040fb2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010040fa40) */

void FUN_10040f940(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [13];
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100a8e3b0;
  FUN_100004bb4(&DAT_100a8e3b0,&DAT_100824d40);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_100412088();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar6,&DAT_1009bced8,&DAT_1009bced8,param_1,uVar1,uVar2);
  local_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(*unaff_x20,&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
              (*(undefined8 *)(unaff_x20 + 8),&local_52,puVar3);
    local_60 = *(undefined8 *)(unaff_x20 + 0x10);
    local_61 = 2;
    puVar4 = &DAT_100a7c740;
    FUN_100004bb4(&DAT_100a7c740,&DAT_1008105b8);
    puVar5 = &DAT_100a8e3c0;
    FUN_1004142fc(&DAT_100a8e3c0,PTR___sSiSEsWP_100995970,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_60,&local_61,puVar3,puVar4,puVar5);
    local_62 = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(unaff_x20[0x18],&local_62,puVar3);
    local_63 = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
              (*(undefined8 *)(unaff_x20 + 0x20),&local_63,puVar3);
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  return;
}

