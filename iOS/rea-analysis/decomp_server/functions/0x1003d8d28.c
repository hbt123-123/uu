// rea decompile_all
// name: FUN_1003d8d28
// address: 0x1003d8d28
// body: available
// range: 0x1003d8d28-0x1003d8e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d8d28(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x21;
  undefined8 local_40;
  undefined8 uStack_38;
  
  param_2 = param_2 + _TtC8UUCommon14FileDataMapper::fileURL;
  lVar3 = 0;
  __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC();
  if (unaff_x21 != 0) {
    local_40 = 0;
    uStack_38 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1c);
    __sSS6appendyySSF(0xd00000000000001a,0x80000001008b4850);
    puVar2 = &DAT_100a75b40;
    FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&stack0xffffffffffffffd8,&local_40,puVar2,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar1 = uStack_38;
    __s10Foundation5NSLogyySS_s7CVarArg_pdtF
              (local_40,uStack_38,PTR___swiftEmptyArrayStorage_100995ea0);
    _swift_errorRelease();
    _swift_bridgeObjectRelease(uVar1);
    param_2 = 0;
    lVar3 = -0x1000000000000000;
  }
  *param_1 = param_2;
  param_1[1] = lVar3;
  return;
}

