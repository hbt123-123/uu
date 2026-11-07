// rea decompile_all
// name: FUN_10050e974
// address: 0x10050e974
// body: available
// range: 0x10050e974-0x10050ec4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010050eba0) */

void FUN_10050e974(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [24];
  long local_98;
  undefined8 auStack_88 [3];
  undefined8 local_70;
  long lStack_68;
  
  do {
    FUN_10053320c();
    if (((ulong)param_1 & 1) != 0) {
      return;
    }
    lVar6 = unaff_x20[0xe];
    if (0 < lVar6) {
      FUN_100535660();
      lVar3 = unaff_x20[2];
      lVar5 = *unaff_x20;
      if (lVar5 == 0) {
        if (lVar3 == 0) goto LAB_10050ebb8;
      }
      else if (lVar3 == unaff_x20[1] - lVar5) {
LAB_10050ebb8:
        FUN_1004f98e4();
        _swift_allocError(&DAT_1009d03a0,param_1,0,0);
        param_1[1] = 0xd;
        *param_1 = 0;
        goto LAB_10050ec0c;
      }
      if (*(char *)(lVar5 + lVar3) != ',') {
        FUN_1004f98e4();
        _swift_allocError(&DAT_1009d03a0,param_1,0,0);
        *param_1 = 0;
        param_1[1] = 0;
LAB_10050ec0c:
        _swift_willThrow();
        return;
      }
      lVar1 = 0;
      if (lVar5 != 0) {
        lVar1 = unaff_x20[1] - lVar5;
      }
      if ((lVar3 < 0) || (lVar1 <= lVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10050ec40);
        (*pcVar2)();
      }
      unaff_x20[2] = lVar3 + 1;
    }
    if (unaff_x20[0x10] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050ec44);
      (*pcVar2)();
    }
    lVar3 = unaff_x20[0x13];
    uVar4 = unaff_x20[0xc];
    FUN_10053716c(lVar3,uVar4,unaff_x20[0xd]);
    if (unaff_x21 != 0) {
      return;
    }
    if ((uVar4 & 1) != 0) {
      return;
    }
    if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050ec3c);
      (*pcVar2)();
    }
    unaff_x20[0xe] = lVar6 + 1;
    lVar6 = unaff_x20[9];
    lVar5 = unaff_x20[10];
    FUN_10003f030(unaff_x20 + 6,lVar6);
    (**(code **)(lVar5 + 8))(auStack_b0,param_2,param_3,lVar3,lVar6,lVar5);
    if (local_98 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050ec48);
      (*pcVar2)();
    }
    thunk_FUN_1000a0074(auStack_b0,auStack_88);
    pcVar2 = (code *)auStack_d0;
    FUN_100505f7c();
    FUN_10007f314(lVar3,auStack_b0,&DAT_100aaa288,&DAT_100836090);
    lVar6 = local_98;
    FUN_100040bb4(auStack_b0,&DAT_100aaa288,&DAT_100836090);
    lVar5 = lStack_68;
    if (lVar6 == 0) {
      FUN_10003f030(auStack_88,local_70);
      (**(code **)(lVar5 + 0x20))(auStack_b0);
      FUN_10050eef0(auStack_b0,lVar3);
    }
    else {
      if (*(long *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10050ec4c);
        (*pcVar2)();
      }
      lVar6 = *(long *)(lVar3 + 0x20);
      FUN_1000ce034(lVar3,*(long *)(lVar3 + 0x18));
      (**(code **)(lVar6 + 0x28))();
    }
    (*pcVar2)(auStack_d0,0);
    param_1 = auStack_88;
    FUN_10003f094();
  } while( true );
}

