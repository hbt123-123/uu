// rea decompile_all
// name: FUN_1000937f4
// address: 0x1000937f4
// body: available
// range: 0x1000937f4-0x1000939bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000937f4(undefined *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined *local_78 [3];
  
  puVar3 = &DAT_100104bc8;
  FUN_10000eb08(&DAT_100104bc8,&DAT_1000d5d90);
  lVar8 = *(long *)(puVar3 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  puVar4 = &DAT_1001041a0;
  FUN_10000eb08(&DAT_1001041a0,&DAT_1000d4300);
  _swift_initStaticObject();
  local_78[0] = PTR___swiftEmptySetSingleton_1000f0750;
  puVar5 = puVar4;
  FUN_100066b80();
  FUN_100066d24(puVar4 + 0x20);
  _swift_bridgeObjectRelease(local_78[0]);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = param_1;
  FUN_10000eba0(param_1,uVar1);
  puVar6 = puVar4;
  FUN_10009632c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_1000fa248,&DAT_1000fa248,puVar6,
             uVar1,uVar2);
  if (unaff_x21 == 0) {
    puVar4 = &DAT_100104bd8;
    FUN_10000eb08(&DAT_100104bd8,&DAT_1000d5d98);
    FUN_10002cf3c(&DAT_100104be0,&DAT_100104bd8,&DAT_1000d5d98,
                  &TargetProtocolConformanceDescriptor_1000d4460);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(local_78,puVar4);
    (**(code **)(lVar8 + 8))(auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar3);
    _swift_bridgeObjectRelease(puVar5);
    puVar4 = local_78[0];
    FUN_100001428(param_1);
  }
  else {
    _swift_bridgeObjectRelease(puVar5);
    FUN_100001428(param_1);
  }
  return puVar4;
}

