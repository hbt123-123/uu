// rea decompile_all
// name: FUN_10067f3d8
// address: 0x10067f3d8
// body: available
// range: 0x10067f3d8-0x10067f5e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10067f3d8(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar6;
  ID *pIVar7;
  ID IVar8;
  undefined *puVar9;
  ID *unaff_x20;
  ID local_60;
  ID IStack_58;
  undefined1 auStack_50 [32];
  int iVar3;
  int iVar4;
  int iVar5;
  
  pIVar7 = &local_60;
  iVar2 = (int)&local_60;
  iVar3 = (int)&local_60;
  iVar4 = (int)&local_60;
  iVar5 = (int)&local_60;
  *(undefined1 *)((long)unaff_x20 + 0x32) = 6;
  FUN_1006818d4(auStack_50);
  uVar6 = 0;
  FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
  puVar1 = PTR___sypN_100995e88;
  _swift_dynamicCast(&local_60,auStack_50,PTR___sypN_100995e88 + 8,uVar6,0);
  if ((int)pIVar7 == 0) {
    FUN_10003f094(param_1);
    _swift_dynamicCast(&local_60,auStack_50,puVar1 + 8,PTR___sSSN_1009957f8,0);
    if (iVar2 == 0) {
      uVar6 = 0;
      FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
      _swift_dynamicCast(&local_60,auStack_50,puVar1 + 8,uVar6,0);
      if (iVar3 == 0) {
        puVar9 = &DAT_100ab9e98;
        FUN_100004bb4(&DAT_100ab9e98,&DAT_10084d520);
        _swift_dynamicCast(&local_60,auStack_50,puVar1 + 8,puVar9,0);
        if (iVar4 == 0) {
          puVar9 = &DAT_100ab9ea0;
          FUN_100004bb4(&DAT_100ab9ea0,&DAT_10084d528);
          _swift_dynamicCast(&local_60,auStack_50,puVar1 + 8,puVar9,0);
          if (iVar5 == 0) {
            *(undefined2 *)((long)unaff_x20 + 0x31) = 6;
          }
          else {
            *(undefined1 *)((long)unaff_x20 + 0x31) = 4;
            _swift_bridgeObjectRelease(unaff_x20[1]);
            unaff_x20[1] = local_60;
          }
        }
        else {
          *(undefined1 *)((long)unaff_x20 + 0x31) = 3;
          _swift_bridgeObjectRelease(*unaff_x20);
          *unaff_x20 = local_60;
        }
      }
      else {
        *(undefined1 *)((long)unaff_x20 + 0x31) = 5;
      }
    }
    else {
      *(undefined1 *)((long)unaff_x20 + 0x31) = 1;
      _swift_bridgeObjectRelease(unaff_x20[3]);
      unaff_x20[2] = local_60;
      unaff_x20[3] = IStack_58;
    }
  }
  else {
    FUN_100681b34();
    if (((ulong)pIVar7 & 1) == 0) {
      FUN_10003f094(param_1);
      *(undefined1 *)((long)unaff_x20 + 0x31) = 0;
      unaff_x20[4] = local_60;
    }
    else {
      *(undefined1 *)((long)unaff_x20 + 0x31) = 2;
      IVar8 = _objc_msgSend(local_60,"boolValue");
      FUN_10003f094(param_1);
      *(char *)(unaff_x20 + 6) = (char)IVar8;
    }
  }
  FUN_10003f094(auStack_50);
  return;
}

