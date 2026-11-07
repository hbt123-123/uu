// rea decompile_all
// name: FUN_1005f35a8
// address: 0x1005f35a8
// body: available
// range: 0x1005f35a8-0x1005f3707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005f35a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100aaef88;
  FUN_100004bb4(&DAT_100aaef88,&BYTE_100844fe8);
  lVar4 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar3);
  FUN_1005f8294();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&DAT_1009dce70,&DAT_1009dce70,param_1,uVar3,
             uVar1);
  local_51 = 0;
  uVar3 = param_2;
  __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF(param_2,&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = (undefined1)((ulong)param_2 >> 0x20);
    local_53 = 1;
    FUN_1005f82d4();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_52,&local_53,puVar2,&DAT_1009dc198,uVar3);
    local_54 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(param_3,&local_54,puVar2);
  }
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar2);
  return;
}

