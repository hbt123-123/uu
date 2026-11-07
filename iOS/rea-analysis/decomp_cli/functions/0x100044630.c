// rea decompile_all
// name: FUN_100044630
// address: 0x100044630
// body: available
// range: 0x100044630-0x10004487f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100044630(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long unaff_x21;
  long local_120;
  undefined1 auStack_118 [80];
  long local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined1 auStack_b0 [80];
  
  puVar3 = &DAT_100103778;
  FUN_10000eb08(&DAT_100103778,&DAT_1000d2748);
  local_120 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar4 = &DAT_100103708;
  FUN_10000eb08(&DAT_100103708,&DAT_1000d2710);
  puVar9 = auStack_118;
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  puVar5 = puVar4;
  FUN_100065928();
  *(undefined **)(puVar4 + 0x20) = puVar5;
  *(undefined1 **)(puVar4 + 0x28) = puVar9;
  puVar4[0x30] = param_3;
  FUN_1000658d8();
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined1 **)(puVar4 + 0x40) = puVar9;
  puVar4[0x48] = param_3;
  FUN_100065be4(puVar4);
  uVar6 = 0xd000000000000010;
  FUN_10005fe24(auStack_b0,0xd000000000000010,0x80000001000c5d40);
  FUN_10001d358();
  FUN_1000689d4(&local_c8,puVar4,uVar6,auStack_b0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  lVar2 = local_c8;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = param_1;
  FUN_10000eba0(param_1,uVar6);
  lVar8 = lVar7;
  FUN_1000493b0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_118 + (-8 - extraout_x8),&DAT_1000f6100,&DAT_1000f6100,lVar8,uVar6,uVar1);
  if (unaff_x21 == 0) {
    puVar4 = &DAT_1001036e0;
    FUN_10000eb08(&DAT_1001036e0,&DAT_1000d26d0);
    FUN_10002cf3c(&DAT_100103770,&DAT_1001036e0,&DAT_1000d26d0,
                  &TargetProtocolConformanceDescriptor_1000d4460);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(&local_c8,puVar4);
    (**(code **)(local_120 + 8))(auStack_118 + (-8 - extraout_x8),puVar3);
    FUN_10002d0ec(lVar2,uStack_c0,local_b8);
    FUN_100001428(param_1);
  }
  else {
    FUN_10002d0ec(lVar2,uStack_c0,local_b8);
    FUN_100001428(param_1);
    local_c8 = lVar7;
  }
  return local_c8;
}

