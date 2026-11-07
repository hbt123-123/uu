// rea decompile_all
// name: FUN_1005dc44c
// address: 0x1005dc44c
// body: available
// range: 0x1005dc44c-0x1005dc573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005dc44c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  puVar3 = &DAT_100aae150;
  FUN_100004bb4(&DAT_100aae150,&DAT_10083f728);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005de1c0();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&DAT_1009d9a28,&DAT_1009d9a28,param_1,uVar1,uVar2);
  local_58 = param_2;
  FUN_100004bb4(&DAT_100aae160,&DAT_10083f730);
  FUN_1005df82c(&DAT_100aae168,FUN_1005de200,PTR___sSayxGSEsSERzlMc_100995880);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF(&local_58);
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar3);
  return;
}

