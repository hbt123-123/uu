// rea decompile_all
// name: FUN_100339a68
// address: 0x100339a68
// body: available
// range: 0x100339a68-0x100339c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100339a68(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x21;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar7 = 0x2d2d;
    uVar8 = 0xe200000000000000;
  }
  else {
    uVar7 = 0x2d2d0a0d;
    uVar8 = 0xe400000000000000;
  }
  __sSS6appendyySSF();
  __sSS6appendyySSF(0xa0d,0xe200000000000000);
  FUN_1002bd428(uVar7,uVar8);
  uVar4 = uVar8;
  __s10Foundation4DataV6appendyyACF();
  lVar1 = param_1;
  FUN_100339ed8(param_1);
  uVar5 = uVar4;
  __s10Foundation4DataV6appendyyACF();
  lVar2 = param_1;
  FUN_10033a08c(param_1);
  if (unaff_x21 == 0) {
    __s10Foundation4DataV6appendyyACF();
    if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
      FUN_100006cdc(lVar2,uVar5);
      FUN_100006cdc(lVar1,uVar4);
    }
    else {
      __sSS6appendyySSF(uVar3,uVar6);
      __sSS6appendyySSF(0x2d2d,0xe200000000000000);
      __sSS6appendyySSF(0xa0d,0xe200000000000000);
      uVar3 = 0x2d2d0a0d;
      uVar6 = 0xe400000000000000;
      FUN_1002bd428(0x2d2d0a0d);
      __s10Foundation4DataV6appendyyACF();
      FUN_100006cdc(lVar2,uVar5);
      FUN_100006cdc(lVar1,uVar4);
      FUN_100006cdc(uVar7,uVar8);
      uVar7 = uVar3;
      uVar8 = uVar6;
    }
    FUN_100006cdc(uVar7,uVar8);
  }
  else {
    FUN_100006cdc(0,0xc000000000000000);
    FUN_100006cdc(lVar1,uVar4);
    FUN_100006cdc(uVar7,uVar8);
  }
  return;
}

