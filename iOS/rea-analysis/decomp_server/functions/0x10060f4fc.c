// rea decompile_all
// name: FUN_10060f4fc
// address: 0x10060f4fc
// body: available
// range: 0x10060f4fc-0x10060f88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10060f4fc(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long local_a0 [4];
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar10 = *(long *)(lVar7 + -8);
  lVar8 = (long)local_a0 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = 0xff;
  FUN_100616300(0xff,lVar7);
  lVar2 = 0;
  FUN_100608530(0,uVar1);
  plVar9 = (long *)(lVar8 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)unaff_x20[2] + 0x58))(plVar9);
  plVar3 = plVar9;
  _swift_getEnumCaseMultiPayload(plVar9,lVar2);
  if ((int)plVar3 == 1) {
    plVar3 = plVar9;
    _swift_getEnumCaseMultiPayload(plVar9,uVar1);
    if ((int)plVar3 == 1) {
      lVar2 = *plVar9;
      local_a0[1] = 0;
      local_a0[2] = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1b);
      __sSS6appendyySSF(0x3c6573696d6f7250,0xe800000000000000);
      uVar1 = 0;
      __ss9_typeName_9qualifiedSSypXp_SbtF(lVar7,0);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar1);
      __sSS6appendyySSF(0x7463656a65722e3e,0xeb00000000286465);
      _swift_getErrorValue(lVar2,auStack_58,&local_70);
      _swift_getDynamicType(local_70,uStack_68,1);
      uVar1 = 0;
      __ss9_typeName_9qualifiedSSypXp_SbtF();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar1);
      __sSS6appendyySSF(0x2e,0xe100000000000000);
      puVar4 = &DAT_100aaffb8;
      local_80 = lVar2;
      FUN_100004bb4(&DAT_100aaffb8,&DAT_100848630);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&local_80,local_a0 + 1,puVar4,PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      __sSS6appendyySSF(0x29,0xe100000000000000);
      _swift_errorRelease(lVar2);
      lVar2 = local_a0[1];
      lVar6 = local_a0[2];
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar8,plVar9,lVar7);
      local_a0[1] = 0;
      local_a0[2] = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x19);
      __sSS6appendyySSF(0x3c6573696d6f7250,0xe800000000000000);
      uVar1 = 0;
      __ss9_typeName_9qualifiedSSypXp_SbtF(lVar7,0);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar1);
      __sSS6appendyySSF(0x6c69666c75662e3e,0xec0000002864656c);
      __ss26DefaultStringInterpolationV06appendC0yyxlF(lVar8,lVar7);
      __sSS6appendyySSF(0x29,0xe100000000000000);
      lVar6 = local_a0[2];
      lVar2 = local_a0[1];
      (**(code **)(lVar10 + 8))(lVar8,lVar7);
    }
  }
  else {
    lVar8 = *plVar9;
    local_a0[1] = 0;
    local_a0[2] = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x21);
    _swift_bridgeObjectRelease(local_a0[2]);
    local_80 = 0x3c6573696d6f7250;
    uStack_78 = 0xe800000000000000;
    uVar5 = 0;
    __ss9_typeName_9qualifiedSSypXp_SbtF(lVar7,0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar5);
    __sSS6appendyySSF(0xd000000000000014,0x80000001008bedc0);
    _swift_beginAccess(lVar8 + 0x10,local_a0 + 1,0,0);
    lVar7 = *(long *)(lVar8 + 0x10);
    _swift_getFunctionTypeMetadata1(0x4000001,uVar1,PTR___sytN_100995e90 + 8);
    lVar2 = lVar7;
    _swift_bridgeObjectRetain();
    __sSa5countSivg();
    _swift_bridgeObjectRelease(lVar7);
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_a0[0] = lVar2;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    __sSS6appendyySSF(0x29,0xe100000000000000);
    _swift_release(lVar8);
    lVar2 = local_80;
    lVar6 = uStack_78;
  }
  auVar11._8_8_ = lVar6;
  auVar11._0_8_ = lVar2;
  return auVar11;
}

