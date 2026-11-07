// rea decompile_all
// name: FUN_100533c30
// address: 0x100533c30
// body: available
// range: 0x100533c30-0x100533d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100533c30(undefined8 *param_1)

{
  uint uVar1;
  uint extraout_w8;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  
  FUN_100535660();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_100533c6c;
LAB_100533c60:
    uVar4 = 0xd;
  }
  else {
    if (lVar2 == unaff_x20[1] - lVar3) goto LAB_100533c60;
LAB_100533c6c:
    if (*(char *)(lVar3 + lVar2) == 't') {
      param_1 = (undefined8 *)&DAT_100aaa100;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100536178();
      if (((ulong)param_1 & 1) != 0) {
        uVar1 = 1;
        goto LAB_100533d10;
      }
    }
    else if (*(char *)(lVar3 + lVar2) == 'f') {
      param_1 = (undefined8 *)&DAT_100aaa100;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100536178();
      if (((ulong)param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_100533d10;
      }
    }
    uVar4 = 4;
  }
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar4;
  _swift_willThrow();
  uVar1 = extraout_w8;
LAB_100533d10:
  return uVar1 & 1;
}

