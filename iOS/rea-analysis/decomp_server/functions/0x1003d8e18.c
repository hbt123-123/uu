// rea decompile_all
// name: FUN_1003d8e18
// address: 0x1003d8e18
// body: available
// range: 0x1003d8e18-0x1003d8f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d8e18(undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x21;
  ulong uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = _TtC8UUCommon14FileDataMapper::fileURL;
  uVar3 = 0;
  if (param_3 >> 0x3c < 0xf) {
    uVar3 = param_2;
  }
  uVar4 = 0xc000000000000000;
  if (param_3 >> 0x3c < 0xf) {
    uVar4 = param_3;
  }
  FUN_10010bd10();
  __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
            (param_4 + lVar1,0,uVar3,uVar4);
  if (unaff_x21 != 0) {
    FUN_100006cdc(uVar3,uVar4);
    local_50 = 0;
    uStack_48 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1d);
    __sSS6appendyySSF(0xd00000000000001b,0x80000001008b4830);
    puVar2 = &DAT_100a75b40;
    FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&stack0xffffffffffffffa8,&local_50,puVar2,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar3 = uStack_48;
    __s10Foundation5NSLogyySS_s7CVarArg_pdtF
              (local_50,uStack_48,PTR___swiftEmptyArrayStorage_100995ea0);
    _swift_errorRelease();
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = 0;
    uVar4 = 0xf000000000000000;
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}

