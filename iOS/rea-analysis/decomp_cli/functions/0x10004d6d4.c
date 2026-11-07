// rea decompile_all
// name: FUN_10004d6d4
// address: 0x10004d6d4
// body: available
// range: 0x10004d6d4-0x10004db13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010004da48) */
/* WARNING: Removing unreachable block (ram,0x00010004d95c) */

void FUN_10004d6d4(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x21;
  undefined8 auStack_180 [2];
  undefined1 auStack_170 [8];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 *local_158;
  long local_150;
  undefined1 *local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  ulong local_120 [3];
  undefined8 uStack_108;
  undefined1 local_100;
  undefined1 auStack_f8 [72];
  undefined1 auStack_b0 [80];
  
  puVar6 = &DAT_100103930;
  local_158 = param_1;
  FUN_10000eb08(&DAT_100103930,&DAT_1000d3248);
  local_150 = *(long *)(puVar6 + -8);
  local_140 = puVar6;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  FUN_10005fe24(auStack_b0,0xd000000000000041,0x80000001000c7490);
  puVar6 = PTR___sSSN_1000f02f8;
  FUN_10005cdf0(local_120 + 2,auStack_b0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  uVar4 = local_100;
  local_138 = local_120[2];
  local_130 = uStack_108;
  local_120[0] = 0x68737a;
  local_120[1] = 0xe300000000000000;
  uVar7 = 0xd000000000000028;
  FUN_10005fe24(auStack_f8,0xd000000000000028,0x80000001000c74e0);
  FUN_1000657bc();
  uVar8 = uVar7;
  FUN_10001d358();
  *(undefined ***)((long)auStack_180 + -extraout_x8) = &PTR_PTR_1000f88f0;
  FUN_1000675f8(local_120 + 2,local_120,uVar7,uVar8,auStack_f8,0,0,0xff,puVar6);
  uVar5 = local_100;
  uVar3 = uStack_108;
  uVar2 = local_120[2];
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  lVar9 = param_2;
  FUN_10000eba0(param_2,uVar8);
  FUN_10004f1f4();
  local_148 = auStack_170 + -extraout_x8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_170 + -extraout_x8,&DAT_1000f6b30,&DAT_1000f6b30,lVar9,uVar8,uVar7);
  uVar7 = local_130;
  uVar8 = local_138;
  if (unaff_x21 == 0) {
    local_168 = uVar2;
    local_160 = uVar3;
    puVar6 = &DAT_1001031b8;
    FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
    local_120[0] = local_120[0] & 0xffffffffffffff00;
    puVar10 = &DAT_1001031e0;
    FUN_10002cf3c(&DAT_1001031e0,&DAT_1001031b8,&DAT_1000d31f0,
                  &TargetProtocolConformanceDescriptor_1000d3a00);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_120 + 2,puVar6,local_120,local_140,puVar6,puVar10);
    FUN_10002d0ec(uVar8,uVar7,uVar4);
    uVar4 = local_100;
    uVar3 = uStack_108;
    uVar2 = local_120[2];
    puVar6 = &DAT_1001038d0;
    FUN_10000eb08(&DAT_1001038d0,&DAT_1000d31f8);
    local_120[0] = CONCAT71(local_120[0]._1_7_,1);
    puVar10 = &DAT_100103940;
    FUN_10002cf3c(&DAT_100103940,&DAT_1001038d0,&DAT_1000d31f8,
                  &TargetProtocolConformanceDescriptor_1000d4460);
    puVar1 = local_148;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_120 + 2,puVar6,local_120,local_140,puVar6,puVar10);
    uVar7 = local_160;
    uVar8 = local_168;
    (**(code **)(local_150 + 8))(puVar1,local_140);
    FUN_10002d0ec(uVar8,uVar7,uVar5);
    FUN_100001428(param_2);
    *local_158 = uVar2;
    local_158[1] = uVar3;
    *(undefined1 *)(local_158 + 2) = uVar4;
    local_158[3] = local_120[2];
    local_158[4] = uStack_108;
    *(undefined1 *)(local_158 + 5) = local_100;
  }
  else {
    FUN_10002d0ec(uVar2,uVar3,uVar5);
    FUN_10002d0ec(local_138,local_130,uVar4);
    FUN_100001428(param_2);
  }
  return;
}

