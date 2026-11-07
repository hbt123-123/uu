// rea decompile_all
// name: FUN_10002cd24
// address: 0x10002cd24
// body: available
// range: 0x10002cd24-0x10002cefb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10002cd24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  long local_c0 [3];
  undefined1 auStack_a8 [72];
  
  puVar3 = &DAT_100102f98;
  FUN_10000eb08(&DAT_100102f98,&DAT_1000cfa78);
  lVar10 = *(long *)(puVar3 + -8);
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000657bc();
  FUN_10005fe24(auStack_a8,0x4a2074757074754f,0xeb000000004e4f53);
  puVar9 = auStack_a8;
  uVar5 = 0;
  FUN_100061924(0,puVar4,puVar9);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar6 = param_1;
  local_c8 = uVar5;
  FUN_10000eba0(param_1,uVar1);
  lVar7 = lVar6;
  FUN_10002cefc();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_d0 + -extraout_x8,&DAT_1000f32b8,&DAT_1000f32b8,lVar7,uVar1,uVar2);
  if (unaff_x21 == 0) {
    puVar8 = &DAT_100102fa8;
    FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
    FUN_10002cf3c(&DAT_100102fb0,&DAT_100102fa8,&DAT_1000cfa80,
                  &TargetProtocolConformanceDescriptor_1000d4060);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(local_c0,puVar8);
    (**(code **)(lVar10 + 8))(auStack_d0 + -extraout_x8,puVar3);
    FUN_10002c9fc(local_c8,puVar4,(uint)puVar9 & 1);
    FUN_100001428(param_1);
  }
  else {
    FUN_10002c9fc(local_c8,puVar4,(uint)puVar9 & 1);
    FUN_100001428(param_1);
    local_c0[0] = lVar6;
  }
  return local_c0[0];
}

