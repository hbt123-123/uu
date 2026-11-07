// rea decompile_all
// name: FUN_10004db14
// address: 0x10004db14
// body: available
// range: 0x10004db14-0x10004dcff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10004db14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x21;
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 auStack_a8 [72];
  
  puVar4 = &DAT_100103920;
  FUN_10000eb08(&DAT_100103920,&DAT_1000d3240);
  local_c8 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10005fe24(auStack_a8,0xd000000000000051,0x80000001000c7430);
  FUN_10005cdf0(&local_c0,auStack_a8,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  lVar3 = local_c0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = param_1;
  FUN_10000eba0(param_1,uVar1);
  lVar6 = lVar5;
  FUN_10004f1b4();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_d0 + -extraout_x8,&DAT_1000f6bc0,&DAT_1000f6bc0,lVar6,uVar1,uVar2);
  if (unaff_x21 == 0) {
    puVar7 = &DAT_1001031b8;
    FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
    FUN_10002cf3c(&DAT_1001031e0,&DAT_1001031b8,&DAT_1000d31f0,
                  &TargetProtocolConformanceDescriptor_1000d3a00);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(&local_c0,puVar7);
    FUN_10002d0ec(lVar3,uStack_b8,local_b0);
    (**(code **)(local_c8 + 8))(auStack_d0 + -extraout_x8,puVar4);
    FUN_100001428(param_1);
  }
  else {
    FUN_10002d0ec(lVar3,uStack_b8,local_b0);
    FUN_100001428(param_1);
    local_c0 = lVar5;
  }
  return local_c0;
}

