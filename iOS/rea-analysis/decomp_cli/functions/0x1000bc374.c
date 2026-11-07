// rea decompile_all
// name: FUN_1000bc374
// address: 0x1000bc374
// body: available
// range: 0x1000bc374-0x1000bc4d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000bc470) */

ulong FUN_1000bc374(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x21;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  byte local_51;
  
  puVar2 = &DAT_100105350;
  FUN_10000eb08(&DAT_100105350,&DAT_1000d82e0);
  lVar7 = *(long *)(puVar2 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  uVar6 = *(ulong *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10000eba0(param_1,uVar6);
  FUN_1000bc2f4();
  puVar4 = &DAT_1000fbf80;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),&DAT_1000fbf80,&DAT_1000fbf80,lVar3,
             uVar6,uVar1);
  if (unaff_x21 == 0) {
    local_52 = 0;
    FUN_1000c03d8();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_51,&DAT_1000fb9f0,&local_52,puVar2,&DAT_1000fb9f0,puVar4);
    uVar6 = (ulong)local_51;
    local_53 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&local_53,puVar2);
    (**(code **)(lVar7 + 8))(auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar2);
    FUN_100001428(param_1);
  }
  else {
    FUN_100001428(param_1);
  }
  return uVar6;
}

