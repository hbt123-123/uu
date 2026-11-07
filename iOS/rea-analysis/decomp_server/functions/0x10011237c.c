// rea decompile_all
// name: FUN_10011237c
// address: 0x10011237c
// body: available
// range: 0x10011237c-0x10011253f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001124d4) */

void FUN_10011237c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100401b14(0);
  pcVar2 = FUN_1001125f0;
  local_90 = param_1;
  uStack_88 = param_2;
  FUN_1003fb45c(FUN_1001125f0,auStack_a0,0xd0000000000000ac,0x800000010088b950,0xd000000000000032,
                0x800000010088bb90,0x98,0);
  local_70 = param_1;
  uStack_68 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar8);
  FUN_10009ff0c();
  uVar6 = 0;
  puVar3 = puVar8;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (puVar8,0,PTR___sSSN_1009957f8,pcVar2);
  (**(code **)(lVar9 + 8))(puVar8,lVar1);
  if (uVar6 >> 0x3c < 0xf) {
    uVar4 = 0;
    __s10Foundation11JSONDecoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONDecoderCACycfc();
    uVar5 = uVar4;
    FUN_1001125f8();
    __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
              (&local_70,&DAT_1009a1b98,puVar3,uVar6,&DAT_1009a1b98,uVar5);
    FUN_100006cc8(puVar3,uVar6);
    _swift_release(uVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x20) = uStack_68;
    *(undefined8 *)(unaff_x20 + 0x18) = local_70;
    *(undefined8 *)(unaff_x20 + 0x28) = local_60;
    FUN_10009143c(uVar5,uVar4,uVar7);
  }
  return;
}

