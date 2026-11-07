// rea decompile_all
// name: FUN_10028a66c
// address: 0x10028a66c
// body: available
// range: 0x10028a66c-0x10028a7b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10028a66c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  uVar3 = param_2[1];
  if ((ulong)param_1[1] >> 0x3c < 0xf) {
    if (uVar3 >> 0x3c < 0xf) {
      uVar6 = *param_2;
      FUN_100008184(uVar6,uVar3);
      uVar5 = *param_1;
      uVar2 = param_1[1];
      *param_1 = uVar6;
      param_1[1] = uVar3;
      FUN_100006cdc(uVar5,uVar2);
      goto LAB_10028a6fc;
    }
    FUN_100008d0c(param_1);
  }
  else if (uVar3 >> 0x3c < 0xf) {
    uVar5 = *param_2;
    FUN_100008184(uVar5,uVar3);
    *param_1 = uVar5;
    param_1[1] = uVar3;
    goto LAB_10028a6fc;
  }
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
LAB_10028a6fc:
  plVar4 = param_1 + 2;
  plVar7 = param_2 + 2;
  lVar1 = *plVar7;
  if (*plVar4 == 0) {
    if (lVar1 == 0) {
      uVar5 = param_2[3];
      lVar1 = *plVar7;
      param_1[4] = param_2[4];
      param_1[3] = uVar5;
      *plVar4 = lVar1;
    }
    else {
      param_1[2] = lVar1;
      uVar5 = param_2[4];
      param_1[3] = param_2[3];
      param_1[4] = uVar5;
      _swift_retain(uVar5);
    }
  }
  else if (lVar1 == 0) {
    FUN_100040bb4(plVar4,&DAT_100a82be0,&DAT_1008171b8);
    uVar5 = param_2[4];
    lVar1 = *plVar7;
    param_1[3] = param_2[3];
    *plVar4 = lVar1;
    param_1[4] = uVar5;
  }
  else {
    param_1[2] = lVar1;
    uVar5 = param_2[4];
    uVar2 = param_1[4];
    param_1[3] = param_2[3];
    param_1[4] = uVar5;
    _swift_retain();
    _swift_release(uVar2);
  }
  return param_1;
}

