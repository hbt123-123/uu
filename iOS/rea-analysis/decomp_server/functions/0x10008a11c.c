// rea decompile_all
// name: FUN_10008a11c
// address: 0x10008a11c
// body: available
// range: 0x10008a11c-0x10008a407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008a11c(undefined8 param_1,ulong param_2,byte param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  ID IVar5;
  undefined1 auStack_80 [16];
  int local_70;
  ulong local_68;
  byte local_60;
  
  puVar2 = &DAT_100a76600;
  FUN_100004bb4(&DAT_100a76600,&DAT_10080b128);
  _swift_initStaticObject();
  uVar4 = param_2;
  FUN_100044758(param_2,param_3 & 1,puVar2);
  if ((((uVar4 & 1) != 0) && ((*(byte *)(unaff_x20 + 0x14) & 1) == 0)) &&
     (IVar5 = (ID)*(uint *)(unaff_x20 + 0x10), -1 < (int)*(uint *)(unaff_x20 + 0x10))) {
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar3 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher);
    if (((lVar3 != 0) &&
        (lVar3 = *(long *)(lVar3 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
        lVar3 != 0)) &&
       (*(int *)(lVar3 + _TtC14UURemoteServer22StreamerConnectSession::handle) == (int)param_1)) {
      lVar3 = unaff_x20 + 0x20;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 != 0) {
        FUN_10001a914();
        _swift_unknownObjectRelease(lVar3);
        IVar5 = _objc_msgSend(IVar5,"frameQuality");
        if (IVar5 == 0) {
          puVar1 = (ulong *)(unaff_x20 +
                            _TtC14UURemoteServer19SecondScreenManager::reportedAutoFrameQuality);
          if ((*(byte *)((long)puVar1 + 9) & 1) == 0) {
            uVar4 = *puVar1;
            if ((param_3 & 1) != 0) {
              if ((long)param_2 < 3) {
                if (param_2 == 0) {
                  if (uVar4 != 0) goto LAB_10008a2b8;
                }
                else if (param_2 == 1) {
                  if (uVar4 != 1) goto LAB_10008a2b8;
                }
                else if (uVar4 != 2) goto LAB_10008a2b8;
                goto LAB_10008a230;
              }
              if ((long)param_2 < 5) {
                if (param_2 == 3) {
                  if (uVar4 != 3) goto LAB_10008a2b8;
                }
                else if (uVar4 != 4) goto LAB_10008a2b8;
              }
              else if (param_2 == 5) {
                if (uVar4 != 5) goto LAB_10008a2b8;
              }
              else if (uVar4 != 6) goto LAB_10008a2b8;
              goto LAB_10008a230;
            }
            if (uVar4 == param_2) goto LAB_10008a230;
          }
LAB_10008a2b8:
          *puVar1 = param_2;
          *(byte *)(puVar1 + 1) = param_3 & 1;
          *(undefined1 *)((long)puVar1 + 9) = 0;
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_60 = param_3 & 1;
          local_70 = (int)param_1;
          local_68 = param_2;
          FUN_1003fb45c(FUN_100091834,auStack_80,0xd00000000000009f,0x800000010087e740,
                        0xd000000000000027,0x800000010087f530,0x176,0);
          FUN_1000837f8(param_1,0);
          return;
        }
      }
    }
  }
LAB_10008a230:
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_10008a408,0,0xd00000000000009f,0x800000010087e740,0xd000000000000027,
                0x800000010087f530,0x172,0);
  return;
}

