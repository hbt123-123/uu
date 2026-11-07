// rea decompile_all
// name: FUN_1003b0c90
// address: 0x1003b0c90
// body: available
// range: 0x1003b0c90-0x1003b102f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b0d58 to 0x1007df4a8 _swift_storeEnumTagMultiPayload (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003b0e28 to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b0c90(ulong *param_1,ulong param_2,ulong param_3,byte param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar1 = (uint)param_4;
  uVar5 = (ulong)uVar1;
  if (uVar1 < 4) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        param_1[3] = (ulong)&DAT_1009b9b70;
        uVar5 = param_2;
        FUN_1003b15ec();
        param_1[4] = uVar5;
        *param_1 = param_2;
        param_1[1] = param_3;
        uVar2 = 0;
        FUN_100275594(0);
        _swift_storeEnumTagMultiPayload(param_1,uVar2,1);
        goto LAB_1003b0e14;
      }
      goto LAB_1003b0d30;
    }
    if (param_4 == 0) {
      puVar3 = &DAT_100a7b970;
      FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
    }
    else {
      if (uVar1 != 1) goto LAB_1003b0d30;
      puVar3 = &DAT_100a7b970;
      FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
    }
LAB_1003b0f10:
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined1 **)(puVar3 + 0x20) = &DAT_d000000000000018;
    *(undefined **)(puVar3 + 0x48) = PTR___ss5Int64VN_100995cc0;
    *(undefined8 *)(puVar3 + 0x28) = 0x80000001008b3aa0;
    *(ulong *)(puVar3 + 0x30) = param_2;
    puVar4 = puVar3;
    FUN_1000cc648();
    _swift_setDeallocating(puVar3);
    FUN_1003b1534(puVar3 + 0x20);
    param_1[4] = (ulong)&DAT_1009ad7d0;
    param_1[5] = (ulong)&PTR_PTR_1009ad578;
    *param_1 = (ulong)puVar4;
    param_1[1] = 0;
    uVar2 = 0;
    FUN_100275594(0);
  }
  else {
    if (uVar1 < 6) {
      if (uVar1 == 4) {
        puVar3 = &DAT_100a7b970;
        FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
      }
      else {
        if (uVar1 != 5) goto LAB_1003b0d30;
        puVar3 = &DAT_100a7b970;
        FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
      }
      _swift_initStackObject();
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined8 *)(puVar3 + 0x20) = 0x7465665f7473616c;
      *(undefined **)(puVar3 + 0x48) = PTR___sSiN_100995968;
      *(undefined8 *)(puVar3 + 0x28) = 0xee0074615f646568;
      *(ulong *)(puVar3 + 0x30) = param_2;
      puVar4 = puVar3;
      FUN_1000cc648();
      _swift_setDeallocating(puVar3);
      FUN_1003b1534(puVar3 + 0x20);
      *param_1 = (ulong)puVar4;
    }
    else {
      if (uVar1 == 6) {
        param_1[3] = (ulong)&DAT_1009b9bf0;
        uVar5 = param_2;
        FUN_1003b157c();
        param_1[4] = uVar5;
        *param_1 = param_2;
        param_1[1] = param_3;
        uVar2 = 0;
        FUN_100275594(0);
        _swift_storeEnumTagMultiPayload(param_1,uVar2,1);
        param_2 = param_3;
LAB_1003b0e14:
        _swift_bridgeObjectRetain(param_2);
        return;
      }
      if (uVar1 == 8) {
        puVar3 = &DAT_100a7b970;
        FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
        goto LAB_1003b0f10;
      }
      if (uVar1 != 9) {
LAB_1003b0d30:
        uVar2 = 0;
        FUN_100275594(uVar5,0);
        _swift_storeEnumTagMultiPayload(param_1,uVar2,0xb);
        return;
      }
      if (param_2 != 0 || param_3 != 0) {
        uVar5 = param_2 ^ 1 | param_3;
        goto LAB_1003b0d30;
      }
      puVar3 = &DAT_100a7b970;
      FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
      _swift_initStackObject();
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined8 *)(puVar3 + 0x20) = 0x65707974656c6966;
      *(undefined **)(puVar3 + 0x48) = PTR___sSiN_100995968;
      *(undefined8 *)(puVar3 + 0x28) = 0xe800000000000000;
      *(undefined8 *)(puVar3 + 0x30) = 1;
      puVar4 = puVar3;
      FUN_1000cc648();
      _swift_setDeallocating(puVar3);
      FUN_1003b1534(puVar3 + 0x20);
      *param_1 = (ulong)puVar4;
    }
    param_1[4] = (ulong)&DAT_1009ad5f0;
    param_1[5] = (ulong)&PTR_PTR_1009ad568;
    puVar3 = &DAT_1009b8218;
    _swift_allocObject(&DAT_1009b8218,0x29,7);
    param_1[1] = (ulong)puVar3;
    puVar3[0x10] = 0;
    uVar2 = 0;
    FUN_100275594(0);
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    puVar3[0x28] = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar2,3);
  return;
}

