// rea decompile_all
// name: FUN_100040498
// address: 0x100040498
// body: available
// range: 0x100040498-0x100040bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100040498(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  FILE *pFVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  FILE *pFVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  byte *pbVar17;
  long extraout_x8_01;
  ulong uVar18;
  long unaff_x21;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  long local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  uint local_d4;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  byte *local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined1 auStack_a0 [32];
  long local_80;
  FILE *pFStack_78;
  undefined *local_68;
  
  puVar8 = &DAT_1001036e8;
  FUN_10000eb08(&DAT_1001036e8,&DAT_1000d26e8);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100102c60;
  FUN_10000eb08(&DAT_100102c60,&DAT_1000cf6d0);
  local_d0 = *(long *)(puVar8 + -8);
  local_c8 = puVar8;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar17 = (byte *)(((long)&local_f0 - extraout_x8) - extraout_x8_00);
  lVar9 = 0;
  local_b8 = pbVar17;
  __s10Foundation11JSONDecoderC20DateDecodingStrategyOMa();
  lVar20 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar20 + 0x40));
  lVar19 = (long)pbVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  uVar10 = param_3;
  _swift_bridgeObjectRetain();
  __s10Foundation11JSONDecoderCACycfc();
  (**(code **)(lVar20 + 0x68))
            (lVar19,*(undefined4 *)
                     PTR___s10Foundation11JSONDecoderC20DateDecodingStrategyO7iso8601yA2EmFWC_1000f0798
             ,lVar9);
  local_b0 = uVar10;
  __s10Foundation11JSONDecoderC20dateDecodingStrategyAC04DatedE0OvsTj(lVar19);
  lVar9 = 0;
  FUN_100020760();
  puVar8 = &DAT_100101568;
  _swift_initStaticObject();
  local_d4 = (uint)param_2;
  FUN_100001460(param_2);
  puVar16 = puVar8;
  local_e0 = param_1;
  local_c0 = lVar9;
  FUN_1000201c8();
  _swift_bridgeObjectRelease(puVar8);
  if ((ulong)puVar16 >> 0x3c < 0xf) {
    puVar8 = &DAT_1001036f0;
    FUN_10002cf3c(&DAT_1001036f0,&DAT_100102c60,&DAT_1000cf6d0,
                  &TargetProtocolConformanceDescriptor_1000cb918);
    lVar9 = 4;
    pbVar17 = local_b8;
    local_f0 = (long)&local_f0 - extraout_x8;
    local_e8 = puVar8;
    do {
      puVar8 = local_c8;
      lVar19 = local_f0;
      __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                (local_f0,local_c8,param_2,puVar16,local_c8,local_e8);
      if (unaff_x21 != 0) {
        _swift_errorRelease(unaff_x21);
        _swift_release(local_b0);
        (**(code **)(local_d0 + 0x38))(lVar19,1,1,puVar8);
        _swift_bridgeObjectRelease(param_3);
        FUN_10001fc18(lVar19,&DAT_1001036e8,&DAT_1000d26e8);
        goto LAB_100040b8c;
      }
      (**(code **)(local_d0 + 0x38))(lVar19,0,1,puVar8);
      FUN_100046630(lVar19,pbVar17);
      if ((((*pbVar17 & 1) != 0) || (*(FILE **)(pbVar17 + 0x18) == (FILE *)0x0)) ||
         (*(long *)(pbVar17 + 8) != 199)) {
        _swift_release(local_b0);
        FUN_10001fc18(pbVar17,&DAT_100102c60,&DAT_1000cf6d0);
        _swift_bridgeObjectRelease(param_3);
        goto LAB_100040b8c;
      }
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) {
        _swift_bridgeObjectRelease(param_3);
        puVar14 = (undefined4 *)0x69;
        FUN_100022760(0x69,0xd000000000000024,0x80000001000c69c0,DAT_100105680);
        FUN_1000607a4();
        uVar3 = *puVar14;
        FUN_10002c948();
        _swift_allocError(&DAT_1000f78f0,puVar14,0,0);
        *puVar14 = uVar3;
        _swift_willThrow();
        FUN_10002ed24(param_2,puVar16);
        _swift_release(local_b0);
LAB_100040b88:
        FUN_10001fc18(pbVar17,&DAT_100102c60,&DAT_1000cf6d0);
        goto LAB_100040b8c;
      }
      local_80 = *(long *)(pbVar17 + 0x10);
      pFStack_78 = *(FILE **)(pbVar17 + 0x18);
      _swift_bridgeObjectRetain();
      pFVar11 = (FILE *)0xa;
      __sSS6appendyySSF(10,0xe100000000000000);
      pFVar6 = pFStack_78;
      lVar19 = local_80;
      __s6Darwin6stderrSpySo7__sFILEVGvg();
      __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(lVar19,pFVar6);
      _swift_bridgeObjectRelease(pFVar6);
      _fputs((char *)(lVar19 + 0x20),pFVar11);
      _swift_release();
      FUN_100040bd4();
      if (pFVar11 == (FILE *)0x0) {
        _swift_bridgeObjectRelease(param_3);
        puVar14 = (undefined4 *)0x69;
        FUN_100022760(0x69,0xd000000000000010,0x80000001000c69f0,DAT_100105680);
        FUN_1000607a4();
        uVar3 = *puVar14;
        FUN_10002c948();
        _swift_allocError(&DAT_1000f78f0,puVar14,0,0);
        *puVar14 = uVar3;
        _swift_willThrow();
        FUN_10002ed24(param_2,puVar16);
        _swift_release(local_b0);
        pbVar17 = local_b8;
        goto LAB_100040b88;
      }
      local_68 = PTR___sSSN_1000f02f8;
      local_80 = lVar19;
      pFStack_78 = pFVar11;
      FUN_100020a9c(&local_80,auStack_a0);
      uVar12 = param_3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar13 = 0x64726f7773736170;
      uVar10 = 0;
      local_a8 = param_3;
      FUN_100020780();
      uVar18 = (ulong)~(uint)uVar10 & 1;
      lVar19 = *(long *)(param_3 + 0x10) + uVar18;
      if (SCARRY8(*(long *)(param_3 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100040bc0);
        (*pcVar7)();
      }
      if (*(long *)(param_3 + 0x18) < lVar19) {
        FUN_1000336cc(lVar19,uVar12);
        uVar13 = 0x64726f7773736170;
        uVar15 = 0;
        FUN_100020780();
        if (((uint)uVar10 & 1) != (uVar15 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1000f02f8);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100040bd4);
          (*pcVar7)();
        }
joined_r0x0001000409e0:
        if ((uVar10 & 1) != 0) goto LAB_100040738;
LAB_100040964:
        param_3 = local_a8;
        lVar19 = local_a8 + (uVar13 >> 6) * 8;
        *(ulong *)(lVar19 + 0x40) = *(ulong *)(lVar19 + 0x40) | 1L << (uVar13 & 0x3f);
        puVar1 = (undefined8 *)(*(long *)(local_a8 + 0x30) + uVar13 * 0x10);
        *puVar1 = 0x64726f7773736170;
        puVar1[1] = 0xe800000000000000;
        FUN_100020a9c(auStack_a0,*(long *)(local_a8 + 0x38) + uVar13 * 0x20);
        FUN_10002ed24(param_2,puVar16);
        if (SCARRY8(*(long *)(param_3 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100040bc4);
          (*pcVar7)();
        }
        *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
      }
      else {
        if ((uVar12 & 1) == 0) {
          FUN_10003352c();
          goto joined_r0x0001000409e0;
        }
        if ((uVar10 & 1) == 0) goto LAB_100040964;
LAB_100040738:
        param_3 = local_a8;
        lVar19 = *(long *)(local_a8 + 0x38) + uVar13 * 0x20;
        FUN_100001428(lVar19);
        FUN_100020a9c(auStack_a0,lVar19);
        FUN_10002ed24(param_2,puVar16);
      }
      pbVar17 = local_b8;
      puVar8 = &DAT_100102c60;
      FUN_10001fc18(local_b8,&DAT_100102c60,&DAT_1000cf6d0);
      param_2 = (ulong)local_d4;
      FUN_100001460();
      puVar16 = puVar8;
      FUN_1000201c8();
      _swift_bridgeObjectRelease(puVar8);
    } while ((ulong)puVar16 >> 0x3c < 0xf);
  }
  _swift_bridgeObjectRelease(param_3);
  uVar5 = DAT_100105680;
  uVar2 = *(undefined8 *)(local_c0 + 0x10);
  puVar14 = *(undefined4 **)(local_c0 + 0x30);
  lVar9 = *(long *)(local_c0 + 0x20);
  uVar4 = *(undefined8 *)(local_c0 + 0x18);
  if (*(long *)(local_c0 + 0x20) == 0) {
    uVar2 = 0x66;
    puVar14 = (undefined4 *)0x80000001000c45b0;
    lVar9 = -0x7ffffffefff3ba80;
    uVar4 = 0xd00000000000002e;
  }
  FUN_10002c918();
  FUN_100022760(uVar2,uVar4,lVar9,uVar5);
  _swift_bridgeObjectRelease(lVar9);
  _swift_bridgeObjectRelease();
  FUN_1000607a4();
  uVar3 = *puVar14;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar14,0,0);
  *puVar14 = uVar3;
  _swift_willThrow();
  _swift_release(local_b0);
LAB_100040b8c:
  auVar21._8_8_ = puVar16;
  auVar21._0_8_ = param_2;
  return auVar21;
}

