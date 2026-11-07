// rea decompile_all
// name: FUN_10060f2ec
// address: 0x10060f2ec
// body: available
// range: 0x10060f2ec-0x10060f4db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10060f2ec(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 auStack_70 [4];
  
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar10 = *(long *)(lVar7 + -8);
  lVar8 = (long)auStack_70 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xff;
  FUN_100616300(0xff,lVar7);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  puVar9 = (undefined8 *)
           (lVar8 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_10061533c(puVar9);
  puVar4 = puVar9;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar9,1,lVar2);
  if ((int)puVar4 == 1) {
    auStack_70[2] = 0x286573696d6f7250;
    auStack_70[3] = 0xab00000000a680e2;
    uVar6 = 0;
    __ss9_typeName_9qualifiedSSypXp_SbtF(lVar7,0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar6);
    __sSS6appendyySSF(0x29,0xe100000000000000);
  }
  else {
    puVar4 = puVar9;
    _swift_getEnumCaseMultiPayload(puVar9,lVar2);
    if ((int)puVar4 == 1) {
      uVar6 = *puVar9;
      auStack_70[2] = 0;
      auStack_70[3] = 0xe000000000000000;
      __sSS6appendyySSF(0x286573696d6f7250,0xe800000000000000);
      puVar5 = &DAT_100aaffb8;
      auStack_70[1] = uVar6;
      FUN_100004bb4(&DAT_100aaffb8,&DAT_100848630);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (auStack_70 + 1,auStack_70 + 2,puVar5,
                 PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      __sSS6appendyySSF(0x29,0xe100000000000000);
      _swift_errorRelease(uVar6);
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar8,puVar9,lVar7);
      auStack_70[2] = 0;
      auStack_70[3] = 0xe000000000000000;
      __sSS6appendyySSF(0x286573696d6f7250,0xe800000000000000);
      __ss26DefaultStringInterpolationV06appendC0yyxlF(lVar8,lVar7);
      __sSS6appendyySSF(0x29,0xe100000000000000);
      uVar1 = auStack_70[3];
      uVar6 = auStack_70[2];
      (**(code **)(lVar10 + 8))(lVar8,lVar7);
      auStack_70[2] = uVar6;
      auStack_70[3] = uVar1;
    }
  }
  auVar11._8_8_ = auStack_70[3];
  auVar11._0_8_ = auStack_70[2];
  return auVar11;
}

