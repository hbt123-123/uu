// rea decompile_all
// name: FUN_1007be97c
// address: 0x1007be97c
// body: available
// range: 0x1007be97c-0x1007bead3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007be97c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [8];
  
  puVar3 = &DAT_100abccf8;
  FUN_1007b4550();
  lVar7 = *(long *)(puVar3 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1007bfe08();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_70 + -(lVar6 + 0xfU & 0xfffffffffffffff0),&DAT_1009eb668,&DAT_1009eb668,param_1
             ,uVar1,uVar2);
  local_58[0] = 0;
  __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySbSg_xtKF
            (*(undefined1 *)(unaff_x20 + _TtC6Sentry17SentryMXCallStack::threadAttributed),local_58,
             puVar3);
  if (unaff_x21 == 0) {
    local_60 = *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryMXCallStack::callStackRootFrames);
    local_68[0] = 1;
    puVar4 = &DAT_100abcca8;
    FUN_1007b4550(&DAT_100abcca8);
    puVar5 = &DAT_100abcce8;
    FUN_1007bfe90(&DAT_100abcce8,&DAT_100abccf0,&DAT_100852158,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_60,local_68,puVar3,puVar4,puVar5);
  }
  (**(code **)(lVar7 + 8))(auStack_70 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar3);
  return;
}

