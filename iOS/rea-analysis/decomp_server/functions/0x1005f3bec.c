// rea decompile_all
// name: FUN_1005f3bec
// address: 0x1005f3bec
// body: available
// range: 0x1005f3bec-0x1005f3d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005f3bec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100aaefa0;
  FUN_100004bb4(&DAT_100aaefa0,&BYTE_100844ff0);
  lVar4 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar3);
  FUN_1005f8510();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&DAT_1009dcde0,&DAT_1009dcde0,param_1,uVar3,uVar1);
  local_51 = 0;
  uVar3 = param_2;
  __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF(param_2,&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = (undefined1)((ulong)param_2 >> 0x20);
    local_53 = 1;
    FUN_1005f8550();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_52,&local_53,puVar2,&DAT_1009dc2a8,uVar3);
  }
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar2);
  return;
}

