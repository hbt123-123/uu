// rea decompile_all
// name: FUN_1005fcfa0
// address: 0x1005fcfa0
// body: available
// range: 0x1005fcfa0-0x1005fd0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005fcfa0(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  byte local_51;
  
  puVar3 = &DAT_100aaf8b8;
  FUN_100004bb4(&DAT_100aaf8b8,&DAT_100846e68);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005fd498();
  puVar4 = &DAT_1009dd0e0;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar5,&DAT_1009dd0e0,&DAT_1009dd0e0,param_1,uVar1,uVar2);
  local_51 = (byte)param_2 & 1;
  local_52 = 0;
  FUN_1005e868c();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&local_51,&local_52,puVar3,&DAT_1009dcfd0,puVar4);
  if (unaff_x21 == 0) {
    local_53 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              ((param_2 & 0xffff) >> 8 & 1,&local_53,puVar3);
    (**(code **)(lVar6 + 8))(puVar5,puVar3);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,puVar3);
  }
  return;
}

